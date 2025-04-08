/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:26:28 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/08 15:01:25 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data nb;
	nb.value = 42;

	std::cout << "nb pointer: " << &nb << "\n";
	std::cout << "nb value: " << nb.value << "\n";

	uintptr_t serialized = Serializer::serialize(&nb);
	Data *deserialized = Serializer::deserialize(serialized);

	std::cout << "Deserialized pointer: " << deserialized << "\n";
	std::cout << "Deserialized value: " << deserialized->value << "\n";

	if (&nb == deserialized)
		std::cout << "Success: The pointers are identical!\n";
	else
		std::cout << "Error: The pointers are different!\n";

	return (0);
}