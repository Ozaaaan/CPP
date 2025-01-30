/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:05:24 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/06 14:15:05 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
        std::string hi = "HI THIS IS BRAIN";
        std::string *stringPTR = &hi;
        std::string &stringREF = hi;

        std::cout << "Adress of the string variable : " << &hi << "\n";
        std::cout << "Adress of stringPTR : " << stringPTR << "\n";
        std::cout << "Adress of stringREF : " << &stringREF << "\n";
        
        std::cout << "Value of the string variable : " << hi << "\n";
        std::cout << "Value pointed by stringPTR : " << *stringPTR << "\n";
        std::cout << "Value pointed by stringREF : " << stringREF << "\n";
        
        return (0);
}