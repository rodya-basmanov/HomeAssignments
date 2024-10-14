#include "Stack.h"
#include <iostream>

Stack::Stack(int size) 
{
    stack = new int[size];
    high = -1;
    capacity = size;
}

Stack::~Stack() 
{
    delete[] stack;
}

void Stack::push(int value) 
{
    if (high < capacity - 1) 
    {
        stack[++high] = value;
    } 
    else 
    {
        std::cout << "Stack overflow" << std::endl;
    }
}

int Stack::pop() 
{
    if (high >= 0) 
    {
        return stack[high--];
    } 
    else 
    {
        std::cout << "Stack underflow" << std::endl;
        return -1;
    }
}

int Stack::peek() const 
{
    if (high >= 0) 
    {
        return stack[high];
    } 
    else 
    {
        std::cout << "Stack empty" << std::endl;
        return -1;
    }
}
