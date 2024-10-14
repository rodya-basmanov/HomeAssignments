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
