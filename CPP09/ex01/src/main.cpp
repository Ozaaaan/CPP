/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:59:46 by ozdemir           #+#    #+#             */
/*   Updated: 2025/05/05 14:33:29 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
        if (ac != 2)
        {
                std::cerr << "Error, bad usage of ./RPN" << std::endl;
                return (1);
        }
        
        try 
        {
                RPN rpn;
                rpn.calculate(av[1]);
        }
        catch (const std::exception &e)
        {
                std::cerr << e.what() << std::endl;
                return (1);
        }
        return (0);
}