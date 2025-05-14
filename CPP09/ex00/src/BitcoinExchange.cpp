/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:14:50 by ozdemir           #+#    #+#             */
/*   Updated: 2025/05/14 13:03:22 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <cstdlib>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : map(copy.map) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &copy)
{
        if (this != &copy)
                map = copy.map;
        return (*this);
}

bool BitcoinExchange::isValidValue(const float value) const
{
        return (value >= 0 && value <= 1000);
}

bool BitcoinExchange::isValidDate(const std::string &date) const
{
        if (date.length() != 10)
                return false;
        if (date[4] != '-' || date[7] != '-')
                return false;

        int year = std::atoi(date.substr(0,4).c_str());
        int month = std::atoi(date.substr(5,2).c_str());
        int day = std::atoi(date.substr(8,2).c_str());
        
        if (year < 0)
                return false;
        if (month < 1 || month > 12)
                return false;
        if (day < 1 || day > 31)
                return false;

        if ((month == 4 || month == 6 ||month == 9 || month == 11) && day > 30)
                return false;

        if (month == 2)
        {
                bool isBisextile = false;
                if (year % 4 == 0)
                {
                        if (year % 100 == 0)
                        {
                                if (year % 400 == 0)
                                        isBisextile = true;
                        }
                        else
                                isBisextile = true;
                }

                if (isBisextile)
                {
                        if (day > 29)
                                return false;
                }
                else
                {
                        if (day > 28)
                                return false;
                }
        }
        return (true);
}

void BitcoinExchange::loadData(const std::string &filename)
{
        std::ifstream file(filename.c_str());

        if (!file.is_open())
                throw std::runtime_error("Error opening file");

        std::string line;
        std::getline(file, line);

        while (std::getline(file, line))
        {
                size_t delimiter_pos = line.find(',');
                if (delimiter_pos == std::string::npos) //si ',' non trouve on passe a nextline
                        continue;

                std::string date = line.substr(0, delimiter_pos);
                std::string value = line.substr(delimiter_pos + 1);

                float value_str;
                std::istringstream iss(value);
                if (!(iss >> value_str)) //convertit la string 42 sur fichier csv en nombre pour pouvoir la multiplier
                        continue; //si il ne peux pas il passe au suivant
 
                if (isValidDate(date))
                        map[date] = value_str;
        }
        if (map.empty())
                throw std::runtime_error("Database is empty or invalid");
}

void BitcoinExchange::calculateData(const std::string &filename)
{
        std::ifstream file(filename.c_str());

        if (!file.is_open())
        throw std::runtime_error("Error opening file");

        std::string line;
        std::getline(file, line);

        while (std::getline(file, line)) 
        {
                size_t delimiter_pos = line.find('|');

                if (delimiter_pos == std::string::npos) 
                {
                        std::cerr << "Error: bad input => " << line << std::endl;
                        continue;
                }

                std::string date = line.substr(0, delimiter_pos);
                std::string value_str = line.substr(delimiter_pos + 1);

                date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
                value_str.erase(std::remove_if(value_str.begin(), value_str.end(), ::isspace), value_str.end());

                if (!isValidDate(date))
                {
                        std::cerr << "Error: bad input => " << date << std::endl;
                        continue;
                }

                float value;
                try 
                {
                        std::istringstream iss(value_str);
                        if (!(iss >> value)) 
                        {
                                std::cerr << "Error: not a valid number." << std::endl;
                                continue;
                        }
                }
                catch (...) 
                {
                        std::cerr << "Error: not a valid number." << std::endl;
                        continue;
                }

                if (!isValidValue(value)) 
                {
                        if (value < 0)
                                std::cerr << "Error: not a positive number." << std::endl;
                        else if (value > 1000)
                                std::cerr << "Error: too large a number." << std::endl;
                        continue;
                }

                try 
                {
                        float rate = getValue(date);
                        float result = value * rate;
                        
                        std::cout << date << " => " << value << " = " << result << std::endl;
                } 
                catch (const std::exception& e) 
                {
                        std::cerr << "Error: " << e.what() << std::endl;
                }
        }
}

float BitcoinExchange::getValue(const std::string &date) const
{
        std::map<std::string, float>::const_iterator it = map.find(date);

        if (it != map.end())
                return it->second;
    
        it = map.lower_bound(date);

        if (it == map.begin() && date < it->first) 
                throw std::runtime_error("No exchange rate available for this date");
    

        if (it == map.end() || date < it->first)
                --it;

        return it->second;
}