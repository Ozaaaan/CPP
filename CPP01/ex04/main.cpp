/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:34:40 by ozdemir           #+#    #+#             */
/*   Updated: 2025/01/07 16:34:17 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
        if (ac == 4)
                replace(av[1], av[2], av[3]);
        else
                std::cout << "Expecting : [usage] <filename> <string1> <string2>\n";
        return (0);
}
