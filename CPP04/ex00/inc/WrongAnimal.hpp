/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:32:03 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 13:23:24 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
        protected:
                std::string type;
        public:
                WrongAnimal();
                virtual ~WrongAnimal();
                WrongAnimal(const WrongAnimal& obj);
                WrongAnimal& operator=(const WrongAnimal &copy);

                virtual void makeSound() const;
                void setType(std::string type);
                std::string getType() const;
};

#endif