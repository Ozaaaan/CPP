/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:51:37 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 15:15:44 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{
        std::cout << "Dog Default constructor called\n";
        this->type = "Dog";
        this->brain = new Brain();
}

Dog::~Dog()
{
        std::cout << "Dog destructor called\n";
        delete this->brain;
}

Dog::Dog(const Dog& obj)
{
        std::cout << "Dog copy constructor called\n";
        this->type = obj.type;
        this->brain = new Brain(*(obj.brain));
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

Brain* Dog::getBrain() const
{
    return this->brain;
}

void Dog::setBrain(const Brain& brain)
{
    *(this->brain) = brain;
}