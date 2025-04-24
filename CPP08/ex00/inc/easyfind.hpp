/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:14:18 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/22 13:21:12 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
int easyfind(T &container, int nb)
{
        typename T::iterator it = std::find(container.begin(), container.end(), nb);

        if (it == container.end())
                throw std::runtime_error("Value not found");
        return *it;
}

#endif