/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:14:28 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/24 13:56:32 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	std::list<int> list;
	int nb = 2;

	list.push_back(0);
	list.push_back(1);
	list.push_back(2);

	try
	{
		int result = easyfind(list, nb);
		std::cout << "Value found: " << result << std::endl;

		nb = 5;
		result = easyfind(list, nb);
		std::cout << "Useless line" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}