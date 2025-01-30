/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:52:05 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/28 15:03:33 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(std::string name) : name(name) 
{
        std::cout << "ICharacter constructor called\n";
}

ICharacter::~ICharacter() 
{
        std::cout << "ICharacter destructor called\n";
}

ICharacter::ICharacter(const ICharacter &other) 
{
        std::cout << "ICharacter copy constructor called\n";
        this->name = other.name;
}

ICharacter& ICharacter::operator=(const ICharacter &copy) 
{
        if (this != &copy)
                this->name = copy.name;
        return *this;
}
