/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:51:27 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:57:43 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form",
	145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy),
	target(copy.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	this->target = copy.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw AForm::NotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();

	std::string filename = this->target + "_shrubbery";
	std::ofstream outfile(filename.c_str());

	if (!outfile.is_open())
		throw std::runtime_error("Could not open file for writing");

	outfile << "       _-_        " << std::endl;
	outfile << "    /~~   ~~\\    " << std::endl;
	outfile << " /~~         ~~\\  " << std::endl;
	outfile << "{               }  " << std::endl;
	outfile << " \\  _-     -_  /  " << std::endl;
	outfile << "   ~  \\\\ //  ~   " << std::endl;
	outfile << "_- -   | | _- _    " << std::endl;
	outfile << "  _ -  | |   -_    " << std::endl;
	outfile << "      // \\\\      " << std::endl;

	outfile.close();
}