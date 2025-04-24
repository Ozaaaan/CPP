/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:30:43 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/24 13:19:43 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> 
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
		MutantStack &operator=(const MutantStack &copy)
                {
			if (this != &copy)
				std::stack<T>::operator=(copy);
			return *this;
		}
		~MutantStack(){};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return this->c.begin(); }
		iterator end() {return this->c.end(); }

};

#endif