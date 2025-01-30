/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:51:37 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 13:27:16 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{
        std::cout << "Dog Default constructor called\n";
        this->type = "Dog";
}

Dog::~Dog()
{
        std::cout << "Dog destructor called\n";        
}

Dog::Dog(const Dog& obj)
{
        std::cout << "Dog copy constructor called\n";
        *this = obj;
}

Dog& Dog::operator=(const Dog &copy)
{
        if (this != &copy)
                this->type = copy.getType();
        return (*this);
}

void Dog::makeSound() const
{
        
        std::cout << "Wouf\n";
}