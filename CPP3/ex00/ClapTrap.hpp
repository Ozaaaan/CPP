/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:23:16 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/21 13:33:14 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
        private:
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
};

#endif