/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:36:05 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/14 14:28:48 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): nb(0)
{
        std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
        std::cout << "Copy constructor called\n";
        this->nb = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
        std::cout << "Copy assignment operator called\n";
        if (this != &other)
                this->nb = other.getRawBits();
        return(*this);
}

Fixed::~Fixed()
{
        std::cout << "Destructor called\n";
}

void Fixed::setRawBits(int const raw)
{
        this->nb = raw;
}

int Fixed::getRawBits() const
{
        std::cout << "getRawBits member function called\n";
        return this->nb;
}