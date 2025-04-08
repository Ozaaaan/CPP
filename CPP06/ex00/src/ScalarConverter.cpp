/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:32:25 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/08 13:12:02 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void)copy;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void)copy;
	return (*this);
}

void ScalarConverter::convert(std::string const &number)
{
	double nb;
	double intpart;
	char *end;
	std::string dot;

	if (number.length() == 1 && !std::isdigit(number[0]))
	{
		nb = static_cast<double>(number[0]);
	}
	else
	{
		nb = strtod(number.c_str(), &end);

		if (end == number.c_str())
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
	}

	if (std::isnan(nb) || std::isinf(nb))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (nb < CHAR_MIN || nb > CHAR_MAX)
			std::cout << "char: impossible" << std::endl;
		else if (isprint(static_cast<int>(nb)))
			std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

		if (nb < INT_MIN || nb > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(nb) << std::endl;
	}

	if (std::modf(nb, &intpart) == 0 && !std::isnan(nb) && !std::isinf(nb))
		dot = ".0";

	if ((nb < -FLT_MAX || nb > FLT_MAX) && !std::isinf(nb) && !std::isnan(nb))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(nb) << dot << "f" << std::endl;

	if (errno == ERANGE)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << nb << dot << std::endl;
}