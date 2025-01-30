/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:57:26 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/28 14:42:10 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
        std::cout << "Cure default constructor called\n";
}

Cure::~Cure()
{
        std::cout << "Cure destoyed\n";
}

Cure::Cure(const Cure &other) : AMateria(other)
{
        std::cout << "Cure copy constructor called\n";
}

Cure& Cure::operator=(const Cure &copy)
{
        if (this != &copy)
                this->type = copy.type;
        return *this;
}

void Cure::use(ICharacter &target)
{
        std::cout <<"* heals " << target.getName() << " 's wounds *\n";
}

AMateria* Cure::clone() const
{
        return(new Cure(*this));
}