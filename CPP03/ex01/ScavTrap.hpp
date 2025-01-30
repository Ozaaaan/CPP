/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:27:29 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/23 13:40:52 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
        public:
                ScavTrap();
                ScavTrap(std::string name);
                ~ScavTrap();
                ScavTrap(const ClapTrap& other);
                ScavTrap& operator=(ScavTrap const &copy);
                
                void attack(const std::string& target);
                void guardGate();
};

#endif