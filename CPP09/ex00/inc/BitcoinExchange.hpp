/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:14:45 by ozdemir           #+#    #+#             */
/*   Updated: 2025/04/30 12:50:11 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange
{
        private:
                std::map<std::string, float> map;
        public:
                BitcoinExchange();
                ~BitcoinExchange();
                BitcoinExchange(const BitcoinExchange &copy);
                BitcoinExchange& operator=(const BitcoinExchange &copy);

                bool isValidValue(const float value) const;
                bool isValidDate(const std::string &date) const;
                
                void loadData(const std::string &filename);
                void calculateData(const std::string &filename);
                float getValue(const std::string &date) const;
};

#endif