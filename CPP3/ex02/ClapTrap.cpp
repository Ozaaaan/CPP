/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:23:24 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/23 15:12:19 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoint(10), energyPoint(10), attackDamage(0)
{
        std::cout << "ClavTrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
        std::cout << "ClavTrap constructor called\n";
}

ClapTrap::~ClapTrap() 
{
        std::cout << "ClavTrap destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
        std::cout << "ClavTrap copy constructor called\n";
        *this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &copy)
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

void ClapTrap::attack(const std::string& target)
{
        if(this->energyPoint > 0 && this->hitPoint > 0)
        {
                this->energyPoint--;
                std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
                        << this->attackDamage << " points of damage!\n";
        }
        else
                std::cout << "ClapTrap " << this->name << " doesn't have enough energy or hit point!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
        if (this->hitPoint <= 0)
                std::cout << "ClapTrap " << this->name << " doesn't have any hit points left.\n";
        if (amount > this->hitPoint)
                this->hitPoint = 0;
        else
                this->hitPoint -= amount;
        std::cout << "ClapTrap " << this->name << " has taken " << amount 
                << " damage. Hit points left: " << this->hitPoint << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
        if (this->energyPoint > 0 && this->hitPoint > 0)
        {
                this->hitPoint += amount;
                this->energyPoint--;
                std::cout << "ClapTrap " << this->name << " gained " << amount 
                        << " hit points! Hit points left: " << this->hitPoint << "\n";
        }
        else
                std::cout << "ClapTrap " << this->name << " cannot be repaired..\n";
}

void ClapTrap::setName(std::string name) { this->name = name; }

void ClapTrap::setHitPoint(unsigned int value) { this->hitPoint = value; }

void ClapTrap::setEnergyPoint(unsigned int value) { this->energyPoint = value; }

void ClapTrap::setAttackDamage(unsigned int value) { this->attackDamage = value; }

std::string ClapTrap::getName() const { return this->name; }

unsigned int ClapTrap::getHitPoint() const { return this->hitPoint; }

unsigned int ClapTrap::getEnergyPoint() const { return this->energyPoint; }

unsigned int ClapTrap::getAttackDamage() const { return this->attackDamage; }
