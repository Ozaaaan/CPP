/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:48:30 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/08 15:04:56 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer
{
        private:
                Serializer();
                ~Serializer();
                Serializer(const Serializer &copy);
                Serializer &operator=(const Serializer &copy);
        public:
                static uintptr_t serialize(Data* ptr);
                static Data* deserialize(uintptr_t raw);
};

#endif