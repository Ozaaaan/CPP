/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:32:51 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/07 14:14:12 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() 
{
        std::cout << "HumanA destroyed\n";
}

void HumanA::setName(std::string name)
{
        this->name = name;
}

std::string HumanA::getName()
{
        return this->name;
}

void HumanA::attack()
{
        std::cout << this->name << " attacks with their " << this->weapon.getType() << "\n";
}