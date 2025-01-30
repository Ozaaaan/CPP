/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:30:00 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 15:20:19 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{

        std::cout << "Brain Default constructor called\n";
}

Brain::~Brain()
{
        std::cout << "Brain destructor called\n";        
}

Brain::Brain(const Brain& obj)
{
        std::cout << "Brain copy constructor called\n";
        *this = obj;
}

Brain& Brain::operator=(const Brain &copy)
{
        if (this != &copy)
        {
                for (int i = 0; i < 100; i++)
                        this->ideas[i] = copy.ideas[i];
        }
        return (*this);
}

void	Brain::setIdea( int index, std::string const &idea )
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return this->ideas[index];
	return NULL;
}