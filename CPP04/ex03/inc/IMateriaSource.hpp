/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:03:34 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/30 16:06:30 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
        protected:
                IMateriaSource();
                IMateriaSource(const IMateriaSource &other);

                IMateriaSource &operator=(const IMateriaSource &copy);
        public:
                virtual ~IMateriaSource() {}
                
                virtual void learnMateria(AMateria*) = 0;
                virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif