/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 2b */

#ifndef STACK_H
#define STACK_H

class Stack 
{
private:
    int* stack;
    int high;
    int capacity;

public:
    Stack(int size);
    ~Stack();
    void push(int value);
    int pop();
    int peek() const;
};

#endif
