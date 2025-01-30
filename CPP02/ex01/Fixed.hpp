/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:29:37 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/14 15:13:14 by ozdemir          ###   ########.fr       */
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
                
                void setRawBits(int const raw);
                int getRawBits(void) const;
                float toFloat(void) const;
                int toInt(void) const;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
