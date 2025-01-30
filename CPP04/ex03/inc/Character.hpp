/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:27:02 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/30 15:55:45 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Character : public ICharacter
{
        private:
                std::string name;
                AMateria *inventory[4];
        public:
                Character();
                Character(std::string name);
                Character(const Character &other);
                ~Character()

                Character& operator=(const Character &copy);

                std::string const &getName() const;
                void setName(std::string name);
                
                void equip(AMateria* m);
                void unequip(int idx);
                void use(int idx, ICharacter &target);
};

#endif