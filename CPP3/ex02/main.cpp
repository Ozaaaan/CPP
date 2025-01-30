/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:23:09 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/23 15:04:48 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap rb("Robot");

	rb.highFivesGuys();
	rb.takeDamage(50);
	rb.beRepaired(20);
	rb.takeDamage(100);

    return 0;
}