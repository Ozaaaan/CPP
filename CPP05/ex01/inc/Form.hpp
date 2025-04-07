/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:53:26 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 12:53:42 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
        private:
                const std::string name;
                bool isSigned;
                const int gradeSign;
                const int gradeExec;
        public:
                Form();
                Form(std::string name, int gradeSign, int gradeExec);
                ~Form();
                Form(const Form &copy);
                Form &operator=(const Form &copy);
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
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
