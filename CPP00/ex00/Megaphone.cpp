/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:41:24 by ozdemir           #+#    #+#             */
/*   Updated: 2024/12/30 15:41:25 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
        int i = 1;
        int j;
        
        if (ac > 1)
        {
                while (av[i] != 0)
                {
                        j = 0;
                        while(av[i][j] != 0)
                        {
                                if (islower(av[i][j]))
                                        av[i][j] = toupper(av[i][j]);
                                j++;
                        }
                        std::cout << av[i] << " ";
                        i++;
                }
        }
        else
                std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        std::cout << "\n";
        return (0);
}