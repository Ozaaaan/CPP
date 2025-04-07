/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:36:15 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:10:35 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int	main(void)
{
	Intern someRandomIntern;
	Bureaucrat boss("Big Boss", 1);

	std::cout << "--- Testing valid form creation ---" << std::endl;

	AForm *rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}

	AForm *scf = someRandomIntern.makeForm("shrubbery creation", "garden");
	if (scf)
	{
		std::cout << *scf << std::endl;
		boss.signForm(*scf);
		boss.executeForm(*scf);
		delete scf;
	}

	AForm *ppf = someRandomIntern.makeForm("presidential pardon",
			"Douglas Adams");
	if (ppf)
	{
		std::cout << *ppf << std::endl;
		boss.signForm(*ppf);
		boss.executeForm(*ppf);
		delete ppf;
	}

	std::cout << "\n--- Testing invalid form creation ---" << std::endl;

	AForm *nonExistentForm = someRandomIntern.makeForm("coffee making",
			"break room");
	if (nonExistentForm)
	{
		std::cout << "This should not print!" << std::endl;
		delete nonExistentForm;
	}
	else
	{
		std::cout << "Form creation failed as expected." << std::endl;
	}

	return (0);
}