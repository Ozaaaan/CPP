/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:21:14 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/09 14:35:48 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
        std::cout << "[DEBUG] I love having extra bacon for my burger. I really do!\n";
}

void Harl::info()
{
        std::cout << "[INFO] I cannot believe adding extra bacon costs more money.\n";
}

void Harl::warning()
{
        std::cout << "[WARNING] I think I deserve some extra bacon for free.\n";
}

void Harl::error()
{
        std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now.";
}

void Harl::complain(std::string level)
{
        void(Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

        std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
        for (int i = 0; i < 4; i++)
        {
                if (levels[i] == level)
                {
                        (this->*functions[i])();
                        return ;
                }
        }
}