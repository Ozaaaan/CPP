/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:02:07 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/14 15:49:06 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
        private:
                T *elements;
                unsigned int _size;
        public:
                Array() : elements(NULL), _size(0) {}

                ~Array() 
                { 
                        if (elements)
                                delete[] elements;
                }

                Array(unsigned int n) : _size(n)
                {
                        elements = new T[n]();
                }

                Array(const Array &copy) : elements(NULL), _size(0)
                {
                        *this = copy;
                }

                Array &operator=(const Array &copy)
                {
                        if (this != &copy)
                        {
                                if (elements)
                                        delete[] elements;
                                _size = copy._size;
                                elements = new T[_size]();
                                for (unsigned int i = 0; i < _size; i++)
                                        elements[i] = copy.elements[i];
                        }
                        return *this;
                }
  
                T &operator[](unsigned int i)
                {
                        if (i >= _size)
                                throw std::exception();
                        return elements[i];
                }

                unsigned int size() const
                {
                        return _size;
                }              
};

#endif