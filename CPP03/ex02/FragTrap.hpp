/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:00:03 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/23 14:23:01 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
        public:
                FragTrap();
                FragTrap(std::string name);
                ~FragTrap();
                FragTrap(const ClapTrap& other);
                FragTrap& operator=(FragTrap const &copy);
                
                void highFivesGuys(void);
};

#endif