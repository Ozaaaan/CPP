/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:53:32 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:57:21 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeSign(150), gradeExec(150) {}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : name(name),
	isSigned(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeExec < 1 || gradeSign < 1)
		throw GradeTooHighException();
	else if (gradeExec > 150 || gradeSign > 150)
		throw GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm &copy) : name(copy.name), isSigned(copy.isSigned),
	gradeSign(copy.gradeSign), gradeExec(copy.gradeExec) {}

AForm &AForm::operator=(const AForm &copy)
{
	this->isSigned = copy.isSigned;
	return (*this);
}

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getIsSigned() const
{
	return (this->isSigned);
}

int AForm::getGradeSign() const
{
	return (this->gradeSign);
}

int AForm::getGradeExec() const
{
	return (this->gradeExec);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << "Form : " << form.getName() << ", Sign status : ";

	if (form.getIsSigned())
		os << "Signed";
	else
		os << "Not signed";

	os << ", Grade to Sign : " << form.getGradeSign() 
        << ", Grade to Exec : " << form.getGradeExec();
	return (os);
}