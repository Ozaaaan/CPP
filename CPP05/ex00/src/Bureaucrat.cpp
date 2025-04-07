/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:36:05 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:04:24 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
        if (grade > 150)
                throw GradeTooLowException();
        else if (grade < 1)
                throw GradeTooHighException();
        this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
        this->grade = copy.grade;
        return (*this);
}

std::string Bureaucrat::getName() const
{
        return (this->name);
}

int Bureaucrat::getGrade() const
{
        return (this->grade);
}

void Bureaucrat::incrementGrade()
{
        if (this->grade <= 1)
                throw GradeTooHighException();
        this->grade--;
}

void Bureaucrat::decrementGrade()
{
        if (this->grade >= 150)
                throw GradeTooLowException();
        this->grade++;
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
        os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";
        return (os);
}