/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozdemir <ozdemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:59:41 by ozdemir           #+#    #+#             */
/*   Updated: 2025/05/05 15:24:59 by ozdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &copy) { this->stack = copy.stack; }

RPN &RPN::operator=(const RPN &copy)
{
        if (this != &copy)
                this->stack = copy.stack;
        return (*this);
}

void RPN::calculate(const std::string &input)
{
        std::istringstream iss(input);
        std::string token;

        while (iss >> token)
        {
                if (token.length() == 1 && isdigit(token[0]))
                        stack.push(token[0] - '0'); // exemple : '5' (ASCII 53) - '0' (ASCII 48) = 5
                else if (token.length() == 1 && (token[0] == '+' || token[0] == '-' || 
                                        token[0] == '*' || token[0] == '/'))
                {
                        if (stack.size() < 2)
                        {
                                std::cerr << "Error: insufficient value in stack" << std::endl;
                                return;
                        }
                        int b = stack.top();
                        stack.pop();
                        int a = stack.top();
                        stack.pop();

                        if (token[0] == '+')
                                stack.push(a + b);
                        else if (token[0] == '-')
                                stack.push(a - b);
                        else if (token[0] == '*')
                                stack.push(a * b);
                        else if (token[0] == '/')
                        {
                                if (b == 0)
                                {
                                        std::cerr << "Error: impossible division" << std::endl;
                                        return;
                                }
                                stack.push(a / b);
                        }
                }
                else
                {
                        std::cerr << "Error: invalid value '" << token << "'" << std::endl;
                        return;
                }
        }
        
        if (stack.size() != 1)
        {
                std::cerr << "Error: too many/too few values in expression" << std::endl;
                return;
        }

        std::cout << stack.top() << std::endl;
}
