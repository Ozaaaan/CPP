/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:53:26 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:05:30 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
        private:
                const std::string name;
                bool isSigned;
                const int gradeSign;
                const int gradeExec;
        public:
                AForm();
                AForm(std::string name, int gradeSign, int gradeExec);
                virtual ~AForm();
                AForm(const AForm &copy);
                AForm &operator=(const AForm &copy);
                std::string getName() const;
                bool getIsSigned() const;
                int getGradeSign() const;
                int getGradeExec() const;
                void beSigned(Bureaucrat &bureaucrat);
                
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

                class NotSignedException : public std::exception
                {
                        public:
                                virtual const char* what() const throw()
                                {
                                        return "Form is not signed!";
                                }  
                };

                virtual void execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif
