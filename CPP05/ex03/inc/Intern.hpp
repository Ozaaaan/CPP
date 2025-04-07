/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:16:50 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/01 15:26:51 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern
{
        public:
                Intern();
                ~Intern();
                Intern(const Intern &copy);
                Intern &operator=(const Intern &copy);
                AForm *makeForm(std::string name, std::string target);
};

#endif