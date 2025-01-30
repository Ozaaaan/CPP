/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:54:49 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 14:52:49 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
class Brain;

class Cat : public Animal
{
        private:
                Brain *brain;
        public:
                Cat();
                ~Cat();
                Cat(const Cat& obj);
                Cat& operator=(const Cat &copy);
                
                void makeSound() const;
                Brain* getBrain() const;
                void setBrain(const Brain& brain);
};

#endif