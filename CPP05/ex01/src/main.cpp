/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:36:15 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:08:13 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

int	main(void)
{
	try
	{
		Form validForm("Tax Return", 50, 25);
		std::cout << "Test 1: " << validForm << std::endl;

		try
		{
			Form invalidForm("Immigration", 0, 25);
			std::cout << "Ce message ne devrait pas apparaître" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Test 2: Exception attrapée: " << e.what() << std::endl;
		}

		try
		{
			Form invalidForm("Building Permit", 50, 151);
			std::cout << "Ce message ne devrait pas apparaître" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Test 3: Exception attrapée: " << e.what() << std::endl;
		}

		Form healthForm("Health Insurance", 100, 50);
		Bureaucrat highRank("Director", 1);
		std::cout << "Test 4: Avant signature: " << healthForm << std::endl;
		highRank.signForm(healthForm);
		std::cout << "Après signature: " << healthForm << std::endl;

		Form topSecretForm("Top Secret Clearance", 5, 1);
		Bureaucrat lowRank("Intern", 150);
		std::cout << "\nTest 5: Avant tentative de signature: " << topSecretForm << std::endl;
		lowRank.signForm(topSecretForm);
		std::cout << "Après tentative de signature: " << topSecretForm << std::endl;

		try
		{
			Form restrictedForm("Restricted Access", 20, 10);
			Bureaucrat mediumRank("Manager", 30);
			std::cout << "\nTest 6: Tentative directe via beSigned()" << std::endl;
			restrictedForm.beSigned(mediumRank);
		}
		catch (std::exception &e)
		{
			std::cout << "Exception attrapée: " << e.what() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Exception non gérée: " << e.what() << std::endl;
	}

	return (0);
}