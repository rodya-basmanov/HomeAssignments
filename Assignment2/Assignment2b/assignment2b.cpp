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

class Stack 
{
private:
    int* stack;
    int high;
    int capacity;
public:
    Stack(int size)
    {
        stack = new int[size];
        high = -1;
        capacity = size;
    }
    ~Stack()
    {
        delete[] stack;
    }
    void push(int value)
    {
        if (high < capacity - 1)
        {
            stack[++high] = value;
        }
        else 
        {
            std::cout <<"Stack overflow";
        }
    }
    int pop()
    {
        if(high >= 0)
        {
            return stack[high--];
        }
        else
        {
            std::cout << "Stack underflow";
            return -1;
        }
    }
    int peek() const
    {
        if (high >= 0)
        {
            return stack[high];
        }
        else
        {
            std::cout << "Stack empty";
            return -1;
        }
    }
};

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
            stack.push(result);
        }
        else
        {
            std::cout << "Error symbol" << symbol;
            return 1;
        }
    }
    std::cout << "Result: " << stack.peek() << std::endl;
    return 0;
}