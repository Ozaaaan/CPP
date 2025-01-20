/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:11:11 by ozdemir           #+#    #+#             */
/*   Updated: 2024/12/31 16:48:36 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
        private:
                Contact contacts[8];
                int count;
                int oldestIndex;
        public:
                PhoneBook();
                ~PhoneBook();
                
                void addContact();
                void searchContact();
                void displayContact(Contact contact);
};

#endif