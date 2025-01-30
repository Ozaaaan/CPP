/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:33:19 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/07 14:31:28 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB()
{
        std::cout << "HumanB destroyed\n";
}

void HumanB::setName(std::string name)
{
        this->name = name;
}

std::string HumanB::getName()
{
        return this->name;
}

void HumanB::attack()
{
        if (weapon)
                std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
        else
                std::cout << this->name << " has no weapon to attack\n";
}

void HumanB::setWeapon(Weapon &weapon)
{
        this->weapon = &weapon;
}