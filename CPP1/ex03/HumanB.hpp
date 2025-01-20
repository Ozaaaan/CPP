/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:33:11 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/07 14:14:10 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
        private:
                Weapon *weapon;
                std::string name;
        public:
                HumanB(std::string name);
                ~HumanB();

                void setWeapon(Weapon &weapon);
                void setName(std::string name);
                std::string getName();
                void attack();
};

#endif