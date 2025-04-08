/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:09:35 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/08 15:43:58 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base	*generate(void)
{
	Base	*base;
	int		random;

	random = rand() % 3;
	switch (random)
	{
                case 0:
                        base = new A();
                        break ;
                case 1:
                        base = new B();
                        break ;
                case 2:
                        base = new C();
                        break ;
	}
	return (base);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "C\n";
	else
		std::cout << "Unknown type\n";
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A\n";
		return ;
	}
	catch (...) {}
        
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B\n";
		return ;
	}
	catch (...) {}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C\n";
		return ;
	}
	catch (...) {}

	std::cout << "Unknown type\n";
}