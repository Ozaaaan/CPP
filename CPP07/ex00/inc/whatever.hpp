/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:02:16 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/14 12:38:16 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
        T tmp;

        tmp = a;
        a = b;
        b = tmp;
}

template <typename T>
T min(T &a, T &b)
{
        if (a < b)
                return (a);
        else
                return (b);
}

template <typename T>
T max(T &a, T &b)
{
        if (a > b)
                return (a);
        else
                return (b);
}

#endif