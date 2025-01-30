/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:32:53 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/06 13:55:32 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

Zombie *zombieHorde(int N, std::string name)
{
        Zombie* horde = new Zombie[N];
        for (int i = 0; i < N; i++)
        {
                horde[i].setName(name);
        }
        return horde;
}