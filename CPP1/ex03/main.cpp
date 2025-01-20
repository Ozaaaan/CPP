/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:32:05 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/07 13:35:32 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
        {
                Weapon club = Weapon("crude spiked club");

                HumanA bob("Bob", club);
                bob.attack();
                club.setType("some other type of club");
                bob.attack();
        }
        {
                Weapon club = Weapon("crude spiked club");
                HumanB jim("Jim");
                jim.setWeapon(club);
                jim.attack();
                club.setType("some other type of club");
                jim.attack();
        }
        return (0);
}