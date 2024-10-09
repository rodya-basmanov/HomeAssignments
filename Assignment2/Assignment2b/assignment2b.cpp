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

int main()
{
    std::string input;
    std::cout << "Enter the expression in the reverse Polish entry: ";
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::string symbol;
    Stack stack(200);
    while(iss >> symbol)
    {
        if(std::isdigit(symbol[0]))
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
                if(b!=0)
                {
                    result = a / b;
                }
                else 
                {
                    std::cout << "Error";
                    return 1;
                }
            }
            
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}