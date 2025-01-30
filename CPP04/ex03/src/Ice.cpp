/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:39:33 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/28 14:42:14 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
        std::cout << "Ice default constructor called\n";
}

Ice::~Ice()
{
        std::cout << "Ice destoyed\n";
}

Ice::Ice(const Ice &other) : AMateria(other)
{
        std::cout << "Ice copy constructor called\n";
}

Ice& Ice::operator=(const Ice &copy)
{
        if (this != &copy)
                this->type = copy.type;
        return *this;
}

void Ice::use(ICharacter &target)
{
        std::cout <<"* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria* Ice::clone() const
{
        return(new Ice(*this));
}