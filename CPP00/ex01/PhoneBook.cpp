/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:43:43 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/03 14:38:41 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

PhoneBook::PhoneBook() : count(0), oldestIndex(0) {}
PhoneBook::~PhoneBook() {}

std::string truncate(std::string str)
{
        if (str.length() > 10)
                return str.substr(0, 9) + ".";
        return (str);
}

void PhoneBook::addContact()
{
        Contact contact;
        std::string input;

        std::cout << "Enter your firstname: ";
        std::getline(std::cin, input);
        contact.setFirstName(input);

        std::cout << "Enter your last name: ";
        std::getline(std::cin, input);
        contact.setLastName(input);

        std::cout << "Enter your nickname: ";
        std::getline(std::cin, input);
        contact.setNickname(input);

        std::cout << "Enter your phone number: ";
        std::getline(std::cin, input);
        contact.setPhoneNumber(input);

        std::cout << "Enter your darkest secret: ";
        std::getline(std::cin, input);
        contact.setDarkestSecret(input);

        if (count < 8)
        {
                contacts[count] = contact;
                count++;
        }
        else
        {
                contacts[oldestIndex] = contact;
                oldestIndex = (oldestIndex + 1) % 8;
        }
        std::cout << "\033[32mContact added successfully!\033[0m\n";
}

void PhoneBook::displayContact(Contact contact)
{
	std::cout << "FirstName : " << contact.getFirstName() << "\n";
	std::cout << "LastName : " << contact.getLastName() << "\n";
	std::cout << "Nickname : " << contact.getNickname() << "\n";
	std::cout << "Phone number : " << contact.getPhoneNumber() << "\n";
	std::cout << "Dark secret : " << contact.getDarkestSecret() << "\n\n";
}

void PhoneBook::searchContact()
{
        int     index;

        if (count == 0)
        {
                std::cout << "No contact available\n";
                return ;
        }
        std::cout << "|-------------------LIST-------------------|\n";
        std::cout << std::setw(10) << "Index"
                                << "|" << std::setw(10) << "First Name"
                                << "|" << std::setw(10) << "Last Name"
                                << "|" << std::setw(10) << "Nickname\n";
        std::cout << "|------------------------------------------|\n";

        for (int i = 0; i < count; i++)
        {
                std::cout << std::setw(10) << i + 1 << "|"
                        << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
                        << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
                        << std::setw(10) << truncate(contacts[i].getNickname()) << "\n";
        }
        std::cout << "|------------------------------------------|\n";
        std::cout << "Select a contact index: ";
        while (1)
        {
                std::string input;
                std::getline(std::cin, input);
                std::istringstream iss(input);
                if (iss >> index)
                {
                        if (index >= 1 && index <= count)
                        {
                                displayContact(contacts[index - 1]);
                                break;
                        }
                        else
                                std::cout << "invalid index, try again\n";
                }
                else
                        std::cout << "invalid input, try again\n";
        }
}