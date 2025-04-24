/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:30:39 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/22 15:15:51 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int	main(void)
{
	std::srand(std::time(NULL));

	try
	{
		std::cout << "=== Test basique (exemple du sujet) ===" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		std::cout << "\n=== Test avec des valeurs spécifiques ===" << std::endl;
		Span sp2 = Span(5);
		std::vector<int> vals;
		vals.push_back(2);
		vals.push_back(5);
		vals.push_back(6);
		vals.push_back(17);
		vals.push_back(11);
		sp2.addNumbers(vals.begin(), vals.end());
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;

		std::cout << "\n=== Test avec des valeurs négatives ===" << std::endl;
		Span sp3 = Span(5);
		std::vector<int> negVals;
		negVals.push_back(-5);
		negVals.push_back(10);
		negVals.push_back(-15);
		negVals.push_back(20);
		negVals.push_back(0);
		sp3.addNumbers(negVals.begin(), negVals.end());
		std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp3.longestSpan() << std::endl;

		std::cout << "\n=== Test avec un seul nombre ===" << std::endl;
		Span sp4 = Span(5);
		sp4.addNumber(42);
		try
		{
			std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}

		std::cout << "\n=== Test avec capacité dépassée ===" << std::endl;
		Span sp5 = Span(3);
		std::vector<int> tooMany;
		tooMany.push_back(1);
		tooMany.push_back(2);
		tooMany.push_back(3);
		tooMany.push_back(4);
		try
		{
			sp5.addNumbers(tooMany.begin(), tooMany.end());
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception: " << e.what() << std::endl;
		}

		std::cout << "\n=== Test avec 10 000 nombres aléatoires ===" << std::endl;
		const int SIZE = 10000;
		Span bigSpan = Span(SIZE);

		std::vector<int> randomNumbers;
		for (int i = 0; i < SIZE; i++)
		{
			randomNumbers.push_back(rand() % 100000);
		}
		bigSpan.addNumbers(randomNumbers.begin(), randomNumbers.end());

		std::cout << "Shortest span (10000 nombres): " << bigSpan.shortestSpan() << std::endl;
		std::cout << "Longest span (10000 nombres): " << bigSpan.longestSpan() << std::endl;

		std::cout << "\n=== Test avec 20 000 nombres (ajout par plage) ===" << std::endl;
		const int BIGGER_SIZE = 20000;
		Span hugeSpan = Span(BIGGER_SIZE);

		std::vector<int> temp;
		for (int i = 0; i < BIGGER_SIZE; i++)
		{
			temp.push_back(rand() % 1000000);
		}

		try
		{
			hugeSpan.addNumbers(temp.begin(), temp.end());
			std::cout << "Shortest span (20000 nombres): " << hugeSpan.shortestSpan() << std::endl;
			std::cout << "Longest span (20000 nombres): " << hugeSpan.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Exception lors de l'ajout des nombres: " << e.what() << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception non gérée: " << e.what() << std::endl;
	}

	return (0);
}