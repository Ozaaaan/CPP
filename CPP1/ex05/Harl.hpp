/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:21:20 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/09 13:52:01 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
        private:
                void debug(void);
                void info(void);
                void warning(void);
                void error(void);
        public:
                Harl();
                ~Harl();

                void complain(std::string level);

                
};

#endif