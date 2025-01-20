/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:18:28 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/20 16:40:52 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
        private:
                int nb;
                static const int bit = 8;
        public:
                Fixed();
                Fixed(const int value);
                Fixed(const float value);
                Fixed(const Fixed& nb);
                ~Fixed();
                
                Fixed& operator=(const Fixed& other);
                
                bool operator>(const Fixed& other) const;
                bool operator<(const Fixed& other) const;
                bool operator>=(const Fixed& other) const;
                bool operator<=(const Fixed& other) const;
                bool operator==(const Fixed& other) const;
                bool operator!=(const Fixed& other) const;

                Fixed operator+(const Fixed& other) const;
                Fixed operator-(const Fixed& other) const;
                Fixed operator*(const Fixed& other) const;
                Fixed operator/(const Fixed& other) const;

                Fixed& operator++();
                Fixed operator++(int);
                Fixed& operator--();
                Fixed operator--(int);

                static const Fixed& min(Fixed const &a, Fixed const &b);
                static Fixed& min(Fixed &a, Fixed &b);

                static const Fixed& max(Fixed const &a, Fixed const &b);
                static Fixed& max(Fixed &a, Fixed &b);

                void setRawBits(int const raw);
                int getRawBits(void) const;
                float toFloat(void) const;
                int toInt(void) const;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
