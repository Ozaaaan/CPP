/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:03:42 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/30 16:08:17 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
        std::cout << "IMateriaSource default constructor called\n";
}

IMateriaSource::~IMateriaSource() 
{
        std::cout << "IMateriaSource destructor called\n";
}

IMateriaSource::IMateriaSource(const IMateriaSource &other) 
{
        std::cout << "IMateriaSource copy constructor called\n";
        *this = copy;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource &copy) 
{
        void(copy);
        return *this;
}
