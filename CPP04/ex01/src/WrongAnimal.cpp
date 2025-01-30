/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:33:18 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/24 16:33:38 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
        std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
        std::cout << "WrongAnimal destructor called\n";        
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
        std::cout << "WrongAnimal copy constructor called\n";
        *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
        if (this != &copy)
                this->type = copy.getType();
        return (*this);
}

void WrongAnimal::makeSound() const
{
        std::cout << "WrongAnimal sound\n";
}

void WrongAnimal::setType(std::string type)
{
        this->type = type;
}
std::string WrongAnimal::getType() const
{
        return this->type;
}