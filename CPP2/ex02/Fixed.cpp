/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:18:22 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/16 16:47:09 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): nb(0) {}

Fixed::Fixed(const int value)
{
        this->nb = value << Fixed::bit;
}

Fixed::Fixed(const float value)
{
        this->nb = roundf(value * (1 << this->bit));
}

Fixed::Fixed(const Fixed& other)
{
        this->nb = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
        if (this != &other)
                this->nb = other.getRawBits();
        return(*this);
}

Fixed::~Fixed() {}

bool Fixed::operator>(const Fixed& other) const
{
        return (this->nb > other.nb);
}

bool Fixed::operator<(const Fixed& other) const
{
        return (this->nb < other.nb);
}

bool Fixed::operator>=(const Fixed& other) const
{
        return (this->nb >= other.nb);
}

bool Fixed::operator<=(const Fixed& other) const
{
        return (this->nb <= other.nb);
}
bool Fixed::operator==(const Fixed& other) const
{
        return (this->nb == other.nb);
}

bool Fixed::operator!=(const Fixed& other) const
{
        return (this->nb != other.nb);
}

Fixed Fixed::operator+(const Fixed& other) const
{
        Fixed result;

        result.setRawBits(this->nb + other.nb);
        return result;
}
Fixed Fixed::operator-(const Fixed& other) const
{
        Fixed result;

        result.setRawBits(this->nb - other.nb);
        return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
        Fixed result;

        result.setRawBits((this->nb * other.nb) >> Fixed::bit);
        return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
        Fixed result;

        result.setRawBits(this->nb / other.nb);
        return result;
}

Fixed& Fixed::operator++()
{
        this->nb++;
        return(*this);
}

Fixed Fixed::operator++(int)
{
        Fixed temp(*this);
        this->nb++;
        return temp;
}

Fixed& Fixed::operator--()
{
        this->nb--;
        return(*this);
}

Fixed Fixed::operator--(int)
{
        Fixed temp(*this);
        this->nb--;
        return temp;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
        if (a.getRawBits() < b.getRawBits())
                return (a);
        else
                return (b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
        if (a.getRawBits() < b.getRawBits())
                return (a);
        else
                return (b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
        if (a.getRawBits() > b.getRawBits())
                return (a);
        else
                return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
        if (a.getRawBits() > b.getRawBits())
                return (a);
        else
                return (b);
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