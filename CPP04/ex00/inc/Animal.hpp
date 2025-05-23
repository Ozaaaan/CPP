/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:42:45 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 13:23:07 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
        protected:
                std::string type;
        public:
                Animal();
                virtual ~Animal();
                Animal(const Animal& obj);
                Animal& operator=(const Animal &copy);

                virtual void makeSound() const;
                void setType(std::string type);
                std::string getType() const;
};

#endif