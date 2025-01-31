/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:50:53 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/31 13:56:03 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
        public:
                virtual ~ICharacter() {}
                virtual std::string const &getName() const = 0;
                virtual void equip(AMateria* m) = 0;
                virtual void unequip(int idx) = 0;
                virtual void use(int idx, ICharacter &target) = 0;
};

#endif