/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:42:02 by ozdemir           #+#    #+#             */
/*   Updated: 2024/12/31 14:00:56 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void Contact::setIndex(int index) { this->index = index; }

void Contact::setFirstName(std::string firstName) { this->firstName = firstName; }

void Contact::setLastName(std::string lastName) { this->lastName = lastName; }

void Contact::setNickname(std::string nickname) { this->nickname = nickname; }

void Contact::setPhoneNumber(std::string phoneNumber) { this->phoneNumber = phoneNumber; }

void Contact::setDarkestSecret(std::string darkestSecret) { this->darkestSecret = darkestSecret; }

int Contact::getIndex() const { return this->index; }

std::string Contact::getFirstName() const {return this->firstName; }
                
std::string Contact::getLastName() const {return this->lastName; }

std::string Contact::getNickname() const {return this->nickname; }

std::string Contact::getPhoneNumber() const {return this->phoneNumber; }

std::string Contact::getDarkestSecret() const {return this->darkestSecret; }