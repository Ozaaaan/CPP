/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:20:11 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/28 13:56:48 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
        std::cout << "AMateria constructor called\n";
        this->type = type;
}

AMateria::~AMateria()
{
        std::cout << "AMateria " << this->type << " destoyed\n";
}

AMateria::AMateria(const AMateria &other)
{
        std::cout << "AMateria copy constructor called\n";
        *this = other;
}

AMateria& AMateria::operator=(const AMateria &copy)
{
        if (this != &copy)
                this->type = copy.type;
        return *this;
}

std::string const &AMateria::getType() const
{
        return this->type;
}

void AMateria::use(ICharacter &target)
{
        std::cout <<"* AMateria has some effect on " << target.getName() << " *\n";
}