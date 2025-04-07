/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:16:57 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/01 15:28:47 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string formTypes[3] = {"shrubbery creation", "robotomy request",
		"presidential pardon"};
	AForm *forms[3] = {new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target), new PresidentialPardonForm(target)};

	for (int i = 0; i < 3; i++)
	{
		if (name == formTypes[i])
		{
			std::cout << "Intern creates " << formTypes[i] << std::endl;

			for (int j = 0; j < 3; j++)
			{
				if (j != i)
				{
					delete forms[j];
				}
			}

			return (forms[i]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		delete forms[i];
	}

	std::cout << "Error: form type \"" << name << "\" does not exist" << std::endl;
	return (NULL);
}