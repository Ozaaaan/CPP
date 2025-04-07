/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:53:32 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:53:01 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeSign(150), gradeExec(150) {}

Form::Form(std::string name, int gradeSign, int gradeExec) : name(name),
	isSigned(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeExec < 1 || gradeSign < 1)
		throw GradeTooHighException();
	else if (gradeExec > 150 || gradeSign > 150)
		throw GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(const Form &copy) : name(copy.name), isSigned(copy.isSigned),
	gradeSign(copy.gradeSign), gradeExec(copy.gradeExec)
{
}

Form &Form::operator=(const Form &copy)
{
	this->isSigned = copy.isSigned;
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

int Form::getGradeSign() const
{
	return (this->gradeSign);
}

int Form::getGradeExec() const
{
	return (this->gradeExec);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form)
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