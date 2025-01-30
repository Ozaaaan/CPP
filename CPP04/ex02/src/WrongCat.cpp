/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:35:17 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/24 16:36:56 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
        std::cout << "WrongCat Default constructor called\n";
        this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
        std::cout << "WrongCat destructor called\n";        
}

WrongCat::WrongCat(const WrongCat& obj)
{
        std::cout << "WrongCat copy constructor called\n";
        *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
        if (this != &copy)
                this->type = copy.getType();
        return (*this);
}

void WrongCat::makeSound() const
{
        
        std::cout << "woeM\n";
}