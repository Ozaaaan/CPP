/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:17:46 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/31 13:58:34 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
        protected:
                std::string type;
        public:
                AMateria(std::string const &type);
                virtual ~AMateria();
                AMateria(const AMateria &other);
                AMateria& operator=(const AMateria &copy);

                std::string const &getType() const;

                virtual AMateria* clone() const = 0;
                virtual void use(ICharacter &target);
};

#endif