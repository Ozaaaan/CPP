/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:14:53 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/30 14:43:16 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv) 
{
        if (argc != 2) 
        {
                std::cerr << "Error: './btc (filename).txt' expected" << std::endl;
                return 1;
        }

        BitcoinExchange exchange;

        try 
        {
                exchange.loadData("data.csv");
                exchange.calculateData(argv[1]);
        }
        catch (const std::exception& e) 
        {
                std::cerr << "Error: " << e.what() << std::endl;
                return 1;
        }

    return 0;
}