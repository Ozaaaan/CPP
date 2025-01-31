/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:39:21 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/31 13:58:16 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default")
{
        std::cout << "Character default constructor called\n";
        for (int i = 0; i < 4; i++)
                this->inventory[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
        std::cout << "Character constructor called\n";
        for (int i = 0; i < 4; i++)
                this->inventory[i] = NULL;
}

Character::~Character() 
{
        for (int i = 0; i < 4; i++)
        {
                if (this->inventory[i])
                        delete this->inventory[i];
        }
        std::cout << "Character destructor called\n";
}

Character::Character(const Character &other) 
{
        std::cout << "Character copy constructor called\n";
        this->name = other.name;
        for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
                else
                        this->inventory[i] = NULL;
        }
}

Character& Character::operator=(const Character &copy) 
{
        if (this != &copy)
        {
                this->name = copy.name;
                for (int i = 0; i < 4; i++)
                {
                        if (this->inventory[i])
                                delete this->inventory[i];
                        if (copy.inventory[i])
                                this->inventory[i] = copy.inventory[i]->clone();
                        else
                                this->inventory[i] = NULL;
                }
        }
        return *this;
}

std::string const &Character::getName() const
{
        return this->name;
}

void Character::setName(std::string name)
{
        this->name = name;
}

void Character::equip(AMateria* m)
{
        if (!m)
                return;

        for (int i = 0; i < 4; i++)
        {
                if (this->inventory[i] == m)
                        return;
                if (this->inventory[i] == NULL)
                {
                        this->inventory[i] = m;
                        std::cout << "Materia " << this->inventory[i]->getType() << " equipped to " << this->name << "'s inventory at index " << i << "\n";
                        return ;
                }
        }
}

void Character::unequip(int idx)
{
        if (idx >= 0 && idx < 4 && this->inventory[idx])
        {
                std::cout << "Unequipped " << this->inventory[idx]->getType() << " from " << this->name << "'s inventory at index " << idx << "\n";
                this->inventory[idx] = NULL;
        }
}

void Character::use(int idx, ICharacter &target)
{
        if (idx >= 0 && idx < 4 && this->inventory[idx])
                this->inventory[idx]->use(target);
        else
                std::cout << this->name << " doesn't do anything\n";
}