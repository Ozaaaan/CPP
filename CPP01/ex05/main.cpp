/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:21:09 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/09 14:36:00 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main()
{
	Harl	harl;
	std::string	lvl1 = "DEBUG";
	std::string	lvl2 = "INFO";
	std::string	lvl3 = "WARNING";
	std::string	lvl4 = "ERROR";

	harl.complain(lvl1);
	harl.complain(lvl2);
	harl.complain(lvl3);
	harl.complain(lvl4);

	return 0;
}