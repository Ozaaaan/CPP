/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:32:25 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/06 15:31:11 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) 
{
        this->type = type;
}

Weapon::Weapon() {}

Weapon::~Weapon() {}

void Weapon::setType(std::string type)
{
        this->type = type;
}

std::string Weapon::getType() const
{
        return this->type;
}