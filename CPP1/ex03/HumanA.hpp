/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:33:03 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/07 14:26:22 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
        private:
                std::string name;
                Weapon &weapon;
        public:
                HumanA(std::string name, Weapon &weapon);
                ~HumanA();

                void setName(std::string name);
                std::string getName();
                void attack();
};

#endif