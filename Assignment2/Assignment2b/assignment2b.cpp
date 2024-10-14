/*# Assignment 2
## Author
Basmanov Rodion Gennadievich B81-mm
## Contacts
st135699@student.spbu.ru
## Description
Home assingment 2b*/

#include <iostream>
#include <string>
#include <sstream>
#include "Stack.h"

int main() 
{
    std::string input;
    std::cout << "Enter the expression in the reverse Polish entry: ";
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::string symbol;
    Stack stack(200);
    
    while (iss >> symbol) 
    {
        if (std::isdigit(symbol[0])) 
        {
            stack.push(std::stoi(symbol));
        } 
        else if (symbol == "+" || symbol == "-" || symbol == "*" || symbol == "/") 
        {
            int b = stack.pop();
            int a = stack.pop();
            int result = 0;

            if (symbol == "+") 
            {
                result = a + b;
            } 
            else if (symbol == "-") 
            {
                result = a - b;
            } 
            else if (symbol == "*") 
            {
                result = a * b;
            } 
            else if (symbol == "/") 
            {
                if (b != 0) 
                {
                    result = a / b;
                } 
                else 
                {
                    std::cout << "Error: division by zero";
                    return 1;
                }
            }
            stack.push(result);
        } 
        else 
        {
            std::cout << "Error: invalid symbol " << symbol;
            return 1;
        }
    }

    std::cout << "Result: " << stack.peek() << std::endl;
    return 0;
}
