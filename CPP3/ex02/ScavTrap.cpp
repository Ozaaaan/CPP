/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:10:22 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/23 13:59:06 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
        std::cout << "Default ScavTrap called\n";
        this->hitPoint = 100;
        this->energyPoint = 50;
        this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
        std::cout << "ScavTrap constuctor called\n";
        this->name = name;
        this->hitPoint = 100;
        this->energyPoint = 50;
        this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap destructor called\n";
}

ScavTrap::ScavTrap(const ClapTrap& other)
{
        std::cout << "ScavTrap copy constructor called\n";
        *this = other;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &copy)
{
        if (this != &copy)
        {
                this->name = copy.name;
                this->hitPoint = copy.hitPoint;
                this->energyPoint = copy.energyPoint;
                this->attackDamage = copy.attackDamage;
        }
        return(*this);
}

void ScavTrap::attack(const std::string& target)
{
        if(this->energyPoint > 0 && this->hitPoint > 0)
        {
                this->energyPoint--;
                std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
                        << this->attackDamage << " points of damage!\n";
        }
        else
                std::cout << "ScavTrap " << this->name << " doesn't have enough energy or hit point!\n";
}

void ScavTrap::guardGate()
{
        std::cout << "ScavTrap is now in Gate keeper mode\n";
}
