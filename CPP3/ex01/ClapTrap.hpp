/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:23:16 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/23 13:40:07 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
        protected:
                std::string name;
                unsigned int hitPoint;
                unsigned int energyPoint;
                unsigned int attackDamage;
        public:
                ClapTrap();
                ClapTrap(std::string name);
                ~ClapTrap();
                ClapTrap(const ClapTrap& other);
                ClapTrap& operator=(ClapTrap const &copy);
                
                void attack(const std::string& target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);

                void setName(std::string name);
                void setHitPoint(unsigned int value);
                void setEnergyPoint(unsigned int value);
                void setAttackDamage(unsigned int value);

                std::string getName() const;
                unsigned int getHitPoint() const;
                unsigned int getEnergyPoint() const;
                unsigned int getAttackDamage() const;
};

#endif