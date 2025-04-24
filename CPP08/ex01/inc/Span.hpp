/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:30:52 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/22 15:58:34 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <vector>

class Span
{
        private:
                unsigned int total;
                std::vector<int> vector;
        public:
                Span();
                Span(unsigned int nb);
                 Span(const Span &copy);
                Span &operator=(const Span &copy);
                ~Span();

                void addNumber(int nb);
                int shortestSpan();
                int longestSpan();

                template<typename T>
                void addNumbers(T begin, T end)
                {
                        while (begin != end)
                        {
                                addNumber(*begin);
                                ++begin;
                        }
                }

                class totalCapacityReached : public std::exception
                {
                        public:
                                virtual const char* what() const throw();
                };

                class noSpanReachable : public std::exception
                {
                        public:
                                virtual const char* what() const throw();
                };
};

#endif