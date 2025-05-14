/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:06:27 by ozdemir           #+#    #+#             */
/*   Updated: 2025/05/13 14:05:33 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>

class PmergeMe
{
        private:
                std::vector<int> vec;
                std::deque<int> deq;

                void parseInput(const std::string &input);
                bool isNum(const std::string &s);

                template <typename Container>
                size_t binarySearch(const Container &container, int value, size_t start, size_t end);
        
                template <typename Container>
                void fordJohnsonSort(Container &container);

                static bool comparePairs(const std::pair<int, int> &a, const std::pair<int, int> &b);
        public:
                PmergeMe();
                ~PmergeMe();
                PmergeMe(const PmergeMe &copy);
                PmergeMe &operator=(const PmergeMe &copy);

                void executeSort(const std::string &input);
};

#endif
