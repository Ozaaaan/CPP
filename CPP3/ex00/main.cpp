/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:23:09 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/21 17:05:35 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	rb("Robot");

	rb.attack("target2");

	rb.takeDamage(3);
	rb.takeDamage(5);

	rb.beRepaired(4);
	rb.beRepaired(3);

	rb.attack("target3");
	rb.takeDamage(10);
	rb.beRepaired(5);

	return 0;
}