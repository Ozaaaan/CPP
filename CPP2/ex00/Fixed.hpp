/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:36:09 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/16 13:23:57 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
        private:
                int nb;
                static const int bit = 8;
        public:
                Fixed();
                Fixed(const Fixed& nb);
                ~Fixed();
                Fixed& operator=(const Fixed& other);
                
                void setRawBits(int const raw);
                int getRawBits(void) const;

};

#endif
