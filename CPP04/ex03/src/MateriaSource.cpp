/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:10:03 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/31 14:42:04 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
        std::cout << "MateriaSource default constructor called\n";
        for (int i = 0; i < 4; i++)
                this->inv[i] = NULL;
}

MateriaSource::~MateriaSource() 
{
        for (int i = 0; i < 4; i++)
        {
                if (this->inv[i])
                        delete this->inv[i];
        }
        std::cout << "MateriaSource destructor called\n";
}

MateriaSource::MateriaSource(const MateriaSource &other) 
{
        std::cout << "MateriaSource copy constructor called\n";
        for (int i = 0; i < 4; i++)
	{
		if (other.inv[i])
                        this->inv[i] = other.inv[i];
        }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy) 
{
        (void)copy;
        return *this;
}


void MateriaSource::learnMateria(AMateria* materia)
{
        for (int i = 0; i < 4; i++)
        {
                if (this->inv[i] == NULL)
                {
                        std::cout << "MateriaSource learning " << materia->getType() << "\n";
                        this->inv[i] = materia;
                        return;
                }
        }
        std::cout << "Inventory is full\n";
        delete materia;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
        for (int i = 0; i < 4; i++)
        {
                if (this->inv[i] && this-> inv[i]->getType() == type)
                        return(this->inv[i]->clone());
        }
        std::cout << "Error creating materia\n";
        return (0);
}