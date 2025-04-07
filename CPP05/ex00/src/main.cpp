/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:36:15 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:08:37 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat normal("Normal", 75);
		std::cout << "Création réussie: " << normal;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat tooHigh("TooHigh", 0);
		std::cout << "Création réussie (ne devrait pas apparaître): " << tooHigh;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception attendue: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat tooLow("TooLow", 151);
		std::cout << "Création réussie (ne devrait pas apparaître): " << tooLow;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception attendue: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bob("Bob", 5);
		std::cout << "Avant incrémentation: " << bob;
		bob.incrementGrade();
		std::cout << "Après incrémentation: " << bob;
		bob.decrementGrade();
		std::cout << "Après décrémentation: " << bob;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat alice("Alice", 1);
		std::cout << "Avant incrémentation: " << alice;
		alice.incrementGrade();
		std::cout << "Après incrémentation (ne devrait pas apparaître): " << alice;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception attendue: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat charlie("Charlie", 150);
		std::cout << "Avant décrémentation: " << charlie;
		charlie.decrementGrade();
		std::cout << "Après décrémentation (ne devrait pas apparaître): " << charlie;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception attendue: " << e.what() << std::endl;
	}

	return (0);
}