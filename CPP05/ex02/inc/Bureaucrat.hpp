/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:36:01 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:05:57 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
        private:
                const std::string name;
                int grade;
        public:
                Bureaucrat();
                Bureaucrat(std::string name, int grade);
                ~Bureaucrat();
                Bureaucrat(const Bureaucrat &copy);
                Bureaucrat &operator=(const Bureaucrat &copy);
                std::string getName() const;
                int getGrade() const;
                void incrementGrade();
                void decrementGrade();
                void signForm(AForm &form);
                void executeForm(const AForm &form);
                class GradeTooHighException : public std::exception
                {
                        public:
                                virtual const char* what() const throw()
                                {
                                        return "Grade is too high!";
                                }
                };

                class GradeTooLowException : public std::exception
                {
                        public:
                                virtual const char* what() const throw()
                                {
                                        return "Grade is too low!";
                                }
                };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif