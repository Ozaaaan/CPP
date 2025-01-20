/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:44:51 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/13 14:19:58 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void replace(std::string filename, std::string s1, std::string s2)
{
        std::ifstream infile(filename.c_str());
        if (!infile)
        {
                std::cerr << "Error opening file " << filename << "\n";
                return;
        }

        std::ofstream outfile((filename + ".replace").c_str());
        if (!outfile)
        {
                std::cerr << "Error creating file " << filename + ".replace" << "\n";
                return;
        }

        std::string line;
        while (std::getline(infile, line))
        {
                if (s1.empty())
                {
                        outfile << line << "\n";
                        continue;
                }
                size_t position = 0;
                std::string newLine = "";
                while ((position = line.find(s1, position)) != std::string::npos)
                {
                        newLine += line.substr(0, position);
                        newLine += s2;
                        line = line.substr(position + s1.length());
                }
                newLine += line;
                outfile << newLine << "\n";
        }
        infile.close();
        outfile.close();
}