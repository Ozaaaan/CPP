/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:06:21 by ozdemir           #+#    #+#             */
/*   Updated: 2025/05/13 18:05:21 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <iterator>

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	if (this != &copy)
	{
		this->vec = copy.vec;
		this->deq = copy.deq;
	}
	return (*this);
}

bool PmergeMe::isNum(const std::string &s)
{
	if (s.empty())
		return (false);
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (!isdigit(s[i]) && !(i == 0 && s[i] == '+'))
			return (false);
	}
	return (true);
}

void PmergeMe::parseInput(const std::string &input)
{
	int num;

	std::istringstream iss(input);
	std::string token;
	while (iss >> token)
	{
		if (!isNum(token))
			throw std::invalid_argument("Invalid input");
		num = std::atoi(token.c_str());
		if (num < 0)
			throw std::invalid_argument("Negative numbers are not allowed");
		vec.push_back(num);
		deq.push_back(num);
	}
}

template <typename Container>
size_t PmergeMe::binarySearch(const Container &container, int value, size_t start, size_t end)
{
	if (start >= end)
		return start;

	size_t mid = start + (end - start) / 2;

	if (container[mid] == value)
		return mid;

	if (container[mid] < value)
		return binarySearch(container, value, mid + 1, end);
	else
		return binarySearch(container, value, start, mid);
}

template <typename Container>
void PmergeMe::fordJohnsonSort(Container &container)
{
	const size_t size = container.size();

	if (size <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	bool hasOdd = size % 2;
	int oddElement = 0;
	
	for (size_t i = 0; i < size - hasOdd; i += 2)
	{
		if (container[i] > container[i + 1])
            		pairs.push_back(std::make_pair(container[i], container[i + 1]));
		else
        		pairs.push_back(std::make_pair(container[i + 1], container[i]));
	}

	if (hasOdd)
		oddElement = container[size - 1];

	std::vector<std::pair<int, int> > sortedPairs = pairs;
	std::sort(sortedPairs.begin(), sortedPairs.end(), comparePairs);

	Container mainChain;
	Container pendingElements;
	
	for (std::vector<std::pair<int, int> >::const_iterator it = sortedPairs.begin(); it != sortedPairs.end(); ++it)
	{
        	const std::pair<int, int> &pair = *it;
        	mainChain.push_back(pair.first);
        	pendingElements.push_back(pair.second);
	}

	mainChain.insert(mainChain.begin(), pendingElements[0]);

	size_t pairsCount = pendingElements.size();

	std::vector<size_t> insertionOrder;
	insertionOrder.reserve(pairsCount - 1);

	insertionOrder.push_back(1);

	size_t currIdx = 1;
	size_t nextIdx = 3;
	while (currIdx < pairsCount - 1)
	{
		for (size_t i = nextIdx; i > currIdx; --i)
		{
			if (i < pairsCount)
				insertionOrder.push_back(i);
		}
		size_t temp = nextIdx;
		nextIdx = 2 * currIdx + nextIdx;
		currIdx = temp;
    	}

	for (size_t i = 1; i < pairsCount; ++i)
	{
		if (std::find(insertionOrder.begin(), insertionOrder.end(), i) == insertionOrder.end())
			insertionOrder.push_back(i);
	}

	for (std::vector<size_t>::const_iterator it = insertionOrder.begin(); it != insertionOrder.end(); ++it)
	{
		size_t idx = *it;
		if (idx >= pendingElements.size())
			continue;
			
		int element = pendingElements[idx];
		size_t pos = binarySearch(mainChain, element, 0, mainChain.size());
		mainChain.insert(mainChain.begin() + pos, element);
	}

	if (hasOdd)
	{
		size_t pos = binarySearch(mainChain, oddElement, 0, mainChain.size());
		mainChain.insert(mainChain.begin() + pos, oddElement);
	}

	container = mainChain;
}

bool PmergeMe::comparePairs(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    return a.first < b.first;
}

void PmergeMe::executeSort(const std::string &input)
{
	double timeVec;
	double timeDeq;

	try
	{
		parseInput(input);

		std::cout << "Before:";
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << " " << vec[i];
		std::cout << std::endl;

		struct timespec startVec, endVec;
		clock_gettime(CLOCK_MONOTONIC, &startVec);
		fordJohnsonSort(vec);
		clock_gettime(CLOCK_MONOTONIC, &endVec);
		timeVec = (endVec.tv_sec - startVec.tv_sec) * 1e6 + (endVec.tv_nsec
			- startVec.tv_nsec) / 1e3;

		struct timespec startDeq, endDeq;
		clock_gettime(CLOCK_MONOTONIC, &startDeq);
		fordJohnsonSort(deq);
		clock_gettime(CLOCK_MONOTONIC, &endDeq);
		timeDeq = (endDeq.tv_sec - startDeq.tv_sec) * 1e6 + (endDeq.tv_nsec
			- startDeq.tv_nsec) / 1e3;

		std::cout << "After:";
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << " " << vec[i];
		std::cout << std::endl;

		std::cout << std::fixed << std::setprecision(5);
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << timeVec << " μs\n";
		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque  : " << timeDeq << " μs\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
