/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:06:15 by ozdemir           #+#    #+#             */
/*   Updated: 2025/05/12 13:09:52 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	PmergeMe	sorter;

	if (argc < 2)
	{
		std::cerr << "Usage: " << argv[0] << " <positive integers>" << std::endl;
		return (1);
	}
	std::string input;
	for (int i = 1; i < argc; ++i)
	{
		input += argv[i];
		if (i + 1 < argc)
			input += " ";
	}
	sorter.executeSort(input);
	return (0);
}
