/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:41:30 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/06 14:19:51 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
        private:
                std::string name;
        public:
                Zombie(std::string name);
                ~Zombie();

                void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif