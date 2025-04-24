/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:30:44 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/22 15:59:36 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : total(n) {}

Span::Span(const Span &copy) : total(copy.total), vector(copy.vector) {}

Span &Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        this->total = copy.total;
        this->vector = copy.vector;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int nb)
{
        if (vector.size() >= total)
                throw totalCapacityReached();
        vector.push_back(nb);
}

int Span::shortestSpan()
{
        if (vector.size() < 2)
                throw noSpanReachable();
        
        std::vector<int> sorted = vector;
        std::sort(sorted.begin(), sorted.end());

        int minSpan = sorted[1] - sorted[0];
        for (unsigned int i = 1; i < sorted.size(); i++)
        {
                int currentSpan = sorted[i] - sorted[i - 1];
                if (currentSpan < minSpan)
                        minSpan = currentSpan;
        }
	return minSpan;
}

int Span::longestSpan()
{
        if (vector.size() < 2)
                throw noSpanReachable();
        
        int maxSpan = *std::max_element(vector.begin(), vector.end());
        int minSpan = *std::min_element(vector.begin(), vector.end());

        return maxSpan - minSpan;
}

const char* Span::totalCapacityReached::what() const throw()
{
	return "Total numbers of span possible in the vector reached";
}

const char* Span::noSpanReachable::what() const throw()
{
	return "Not enough numbers in the vector to find a span";
}
