/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:01:49 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/14 16:16:57 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) 
{
	Array<int> tabInt(2);
	tabInt[0] = 2;
	tabInt[1] = 4;
	std::cout << "tabInt: " << tabInt[0] << ", " << tabInt[1] << std::endl;

	Array<int> copyInt(tabInt);
	copyInt[0] = 999;
	std::cout << "Original: " << tabInt[0] << ", Copie: " << copyInt[0] << std::endl;
	
	Array<std::string> tabString(3);
	tabString[0] = "Salut";
	tabString[1] = "ca";
	tabString[2] = "va ?";
	
	for (unsigned int i = 0; i < tabString.size(); i++)
        	std::cout << tabString[i] << " ";
	std::cout << std::endl;
    
	try {
		tabInt[5] = 42;
	} catch (std::exception &e) {
		std::cout << "Exception !" << std::endl;
	}

	return 0;
}
