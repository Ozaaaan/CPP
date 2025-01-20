/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:41:17 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/02 16:36:24 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void    showHome()
{
    std::cout << "**********************************************\n";
    std::cout << "*                   \033[5;31mWelcome            \033[0m      *\n";
    std::cout << "*                                            *\n";
    std::cout << "**********************************************\n";
    std::cout << "Menu:\n";
    std::cout << "> \033[38;5;226mADD\033[0m📲    : Add a new contact\n";
    std::cout << "> \033[38;5;226mSEARCH\033[0m🔎 : Search for a contact\n";
    std::cout << "> \033[38;5;226mEXIT\033[0m📵  : Exit the PhoneBook\n";
    std::cout << "**********************************************\n";
}

int main()
{
        std::string cmd;
        PhoneBook PhoneBook;

        showHome();
        while (1)
        {
                std::cout << "->";
                std::getline(std::cin, cmd);

                if (cmd == "ADD")
                        PhoneBook.addContact();
                else if (cmd == "SEARCH")
                        PhoneBook.searchContact();
                else if (cmd == "EXIT")
                {
                        std::cout << "Exiting the PhoneBook\n";
                        break;
                }
                else
                        std::cout << "try again with 'ADD', 'SEARCH' or 'EXIT'\n";
        }
        return (0);
}