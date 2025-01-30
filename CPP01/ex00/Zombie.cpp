/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:40:50 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/03 16:02:57 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name)
{
        this->name = name;
}

Zombie::~Zombie()
{
        std::cout << this->name << " died again\n"; 
}

void Zombie::announce(void) 
{
        std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
