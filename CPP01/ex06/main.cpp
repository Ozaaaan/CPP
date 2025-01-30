/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:21:09 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/09 14:39:34 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	
	if (ac < 2)
	{
		std::cerr << "Usage: " << av[0] << " <level>\n";
		return (1);
	}
	
	harl.complain(av[1]);
	return (0);
}