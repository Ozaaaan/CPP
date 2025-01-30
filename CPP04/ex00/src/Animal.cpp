/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:45:43 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 13:27:05 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
{
        std::cout << "Animal Default constructor called\n";
}

Animal::~Animal()
{
        std::cout << "Animal destructor called\n";        
}

Animal::Animal(const Animal& obj)
{
        std::cout << "Animal copy constructor called\n";
        *this = obj;
}

Animal& Animal::operator=(const Animal &copy)
{
        if (this != &copy)
                this->type = copy.getType();
        return (*this);
}

void Animal::makeSound() const
{
        std::cout << "Animal sound\n";
}

void Animal::setType(std::string type)
{
        this->type = type;
}
std::string Animal::getType() const
{
        return this->type;
}