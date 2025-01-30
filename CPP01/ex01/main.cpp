/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:32:32 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/06 14:26:15 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"
#include "Zombie.hpp"

int main()
{
        Zombie *horde = zombieHorde(5, "Ozan");

        std::cout << "Address 1st zombie: " << horde << "\n";
        std::cout << "Address 1st zombie: " << &horde[0] << "\n";
        for(int i = 0; i < 5; i++)
        {
                std::cout << i + 1 << ": ";
                horde[i].announce();
        }
        delete[] horde;
        return(0);
}