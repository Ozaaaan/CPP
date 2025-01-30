/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:59:55 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/23 15:05:23 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
        std::cout << "Default FragTrap called\n";
        this->hitPoint = 100;
        this->energyPoint = 100;
        this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
        std::cout << "FragTrap constuctor called\n";
        this->name = name;
        this->hitPoint = 100;
        this->energyPoint = 100;
        this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
        std::cout << "FragTrap destructor called\n";
}

FragTrap::FragTrap(const ClapTrap& other)
{
        std::cout << "FragTrap copy constructor called\n";
        *this = other;
}

FragTrap& FragTrap::operator=(FragTrap const &copy)
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

void FragTrap::highFivesGuys()
{
        std::cout << "FragTrap " << this->name << " request a high five!\n";
}