/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:40:40 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/08 15:48:10 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	srand(time(NULL));

	Base *x(generate());
	Base *y(generate());
	Base *z(generate());

	identify(x);
	identify(y);
	identify(z);

	std::cout << "\n";

	identify(*x);
	identify(*y);
	identify(*z);

	delete x;
	delete y;
	delete z;
}