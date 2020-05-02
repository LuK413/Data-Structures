#ifndef STACK_H
#define STACK_H

#include <iostream>

// template <typename T>
// class Stack {
// private:
//     T *contents;
//     int size;
//     int capacity;
// public:
//     int getSize();
//     T get(int num);
//     Stack();
//     void push(T data);
//     T pop();
//     bool empty();
//     T top();
//     ~Stack();

//     // friend std::ostream &operator<<(std::ostream &out, const Stack<T> &s);
// };

class Stack {
private:
    int *contents;
    int size;
    int capacity;
public:
    int getSize();
    int get(int num);
    Stack();
    void push(int data);
    int pop();
    bool empty();
    int top();
    ~Stack();

    // friend std::ostream &operator<<(std::ostream &out, const Stack<T> &s);
};


#endif