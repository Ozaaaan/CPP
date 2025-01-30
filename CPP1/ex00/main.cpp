/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:40:38 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/06 13:23:39 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
        Zombie zombie1 = Zombie("foo");
        zombie1.announce();

        Zombie *zombie2;
        zombie2 = newZombie("tball");
        zombie2->announce();

        randomChump("Apocalypse");

        delete zombie2;
        return(0);
}