/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:33:03 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/24 16:54:54 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
        const Animal* animal = new Animal();
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();
        const WrongAnimal* malani = new WrongAnimal();
        const WrongAnimal* tac = new WrongCat();

        std::cout << dog->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
        
        cat->makeSound();
        dog->makeSound();
        
        animal->makeSound();

        tac->makeSound();
        malani->makeSound();

        delete cat;
        delete dog; 
        delete animal;
        delete tac;
        delete malani;

        return 0;
}