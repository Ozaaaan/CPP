/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:09:57 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/31 13:56:40 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
        protected:
                AMateria *inv[4];
        public:
                MateriaSource();
                ~MateriaSource();
                MateriaSource(const MateriaSource &other);
                
                MateriaSource &operator=(const MateriaSource &copy);
                
                void learnMateria(AMateria* materia);
                AMateria* createMateria(std::string const &type);
};

#endif