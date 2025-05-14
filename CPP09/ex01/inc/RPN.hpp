/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:59:36 by ozdemir           #+#    #+#             */
/*   Updated: 2025/05/05 14:33:16 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>

class RPN
{
        private:
                std::stack<int> stack;
        public:
                RPN();
                ~RPN();
                RPN(const RPN &copy);
                RPN &operator=(const RPN &copy);
                void calculate(const std::string &str);
};

#endif