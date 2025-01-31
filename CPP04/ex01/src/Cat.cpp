/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:55:58 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/31 16:11:57 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() 
{
        std::cout << "Cat Default constructor called\n";
        this->type = "Cat";
        this->brain = new Brain();
}

Cat::~Cat()
{
        std::cout << "Cat destructor called\n";
        delete this->brain;
}

Cat::Cat(const Cat& obj)
{
        std::cout << "Cat copy constructor called\n";
        this->type = obj.type;
        this->brain = new Brain(*(obj.brain));
}

Cat& Cat::operator=(const Cat &copy)
{
        if (this != &copy)
        {
                this->type = copy.getType();
                this->brain = new Brain(*copy.brain);
        }
        return (*this);
}

void Cat::makeSound() const
{
        
        std::cout << "Meow\n";
}

Brain* Cat::getBrain() const
{
    return this->brain;
}

void Cat::setBrain(const Brain& brain)
{
    *(this->brain) = brain;
}