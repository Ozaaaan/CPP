/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:32:30 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/02 15:08:25 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <climits>
#include <cfloat>
#include <cstdlib>
#include <cerrno>
#include <cmath>
#include <cctype>

class ScalarConverter
{
        private:
                ScalarConverter();
                ~ScalarConverter();
                ScalarConverter(const ScalarConverter &copy);
                ScalarConverter &operator=(const ScalarConverter &copy);
        public:
                static void convert(const std::string &number);
};

#endif