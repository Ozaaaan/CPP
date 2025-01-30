/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:33:03 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 15:27:46 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const int size = 6;

	Animal* animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "\n--- Test de la copie profonde ---\n";

	Dog dog1;
	dog1.getBrain()->setIdea(0, "Test 1");

	Dog dog2 = dog1;
	dog2.getBrain()->setIdea(0, "Test 2");

	if (dog1.getBrain()->getIdea(0) != dog2.getBrain()->getIdea(0)) 
		std::cout << "Copie profonde.\n";
	else 
		std::cout << "Copie superficielle.\n";

	return 0;
}