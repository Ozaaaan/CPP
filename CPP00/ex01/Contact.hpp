/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:11:02 by ozdemir           #+#    #+#             */
/*   Updated: 2024/12/31 13:53:38 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact 
{
        private:
                int     index;
                std::string firstName;
                std::string lastName;
                std::string nickname;
                std::string phoneNumber;
                std::string darkestSecret;
        public:
                void setIndex(int index);
                void setFirstName(std::string firstName);
                void setLastName(std::string lastName);
                void setNickname(std::string nickname);
                void setPhoneNumber(std::string phoneNumber);
                void setDarkestSecret(std::string darkestSecret);

                int getIndex() const;
                std::string getFirstName() const;
                std::string getLastName() const;
                std::string getNickname() const;
                std::string getPhoneNumber() const;
                std::string getDarkestSecret() const;
};

#endif