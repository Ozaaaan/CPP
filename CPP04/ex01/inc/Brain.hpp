/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:10:11 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/27 14:51:40 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
        private:
                std::string ideas[100];
        public:
                Brain();
                ~Brain();
                Brain(const Brain &other);
                Brain& operator=(const Brain &copy);

                std::string getIdea( int index ) const ;
		void setIdea (int index, std::string const &idea ) ; 
                
};


#endif
