#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
private:
    T *contents;
    int size;
    int capacity;
public:
    Stack();
    void push(T data);
    T pop();
    bool empty();
    T top();
    ~Stack();
};

#endif