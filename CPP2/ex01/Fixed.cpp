/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:14:18 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/16 15:01:49 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): nb(0)
{
        std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value)
{
        std::cout << "Int constructor called\n";
        this->nb = value << Fixed::bit;
}

Fixed::Fixed(const float value)
{
        std::cout << "Float constructor called\n";
        this->nb = roundf(value * (1 << this->bit));
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
        return this->nb;
}

float Fixed::toFloat(void) const
{
        return (float)this->nb / (float)(1 << this->bit);
}

int Fixed::toInt(void) const
{
        return (roundf(this->nb / (1 << this->bit)));
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
        return (os << fixed.toFloat());
}