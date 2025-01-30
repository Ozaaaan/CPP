/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:55:58 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 13:27:11 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
        std::cout << "Cat Default constructor called\n";
        this->type = "Cat";
}

Cat::~Cat()
{
        std::cout << "Cat destructor called\n";        
}

Cat::Cat(const Cat& obj)
{
        std::cout << "Cat copy constructor called\n";
        *this = obj;
}

Cat& Cat::operator=(const Cat &copy)
{
        if (this != &copy)
                this->type = copy.getType();
        return (*this);
}

void Cat::makeSound() const
{
        
        std::cout << "Meow\n";
}