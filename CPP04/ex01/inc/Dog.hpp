/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:49:46 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 15:15:59 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
        private:
                Brain *brain;
        public:
                Dog();
                ~Dog();
                Dog(const Dog& obj);
                Dog& operator=(const Dog &copy);
                
                void makeSound() const;
                Brain* getBrain() const;
                void setBrain(const Brain& brain);
};

#endif