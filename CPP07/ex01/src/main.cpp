/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:49:38 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/14 13:01:34 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void	printInt(int &n)
{
	std::cout << n << " ";
}

void	printString(std::string &str)
{
	std::cout << str << " ";
}

void	doubleValue(int &n)
{
	n *= 2;
}

int	main(void)
{
	int intArray[5] = {1, 2, 3, 4, 5};
	std::cout << "Tableau d'entiers: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;

	iter(intArray, 5, doubleValue);

	std::cout << "Tableau d'entiers apres valeurs double : ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;

	std::string strArray[3] = {"Salut", "ca", "va"};
	std::cout << "Affichage du tableau de strings: ";
	iter(strArray, 3, printString);
	std::cout << std::endl;

	return (0);
}