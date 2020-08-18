#ifndef STACK_H
#define STACK_H

#include <iostream>

template <class T>
class Stack {
private:
    T *contents;
    int size;
    int capacity;
public:
    int getSize();
    T get(int num);
    Stack();
    void push(T data);
    T pop();
    bool empty();
    T top();
    ~Stack();
};

template <class T>
Stack<T>::Stack() {
    this->contents = new T[2];
    this->size = 0;
    this->capacity = 2;
}

template <class T>
void Stack<T>::push(T data) {
    if (this->size == this->capacity) {
        T *temp = new T[capacity * 2];
        T *rm = this->contents;

        for (int i = 0; i < this->size; ++i) 
            temp[i] = this->contents[i];

        this->contents = temp;
        delete [] rm;
        this->capacity *= 2;
    }

    this->contents[this->size] = data;
    ++this->size;
}

template <typename T>
T Stack<T>::pop() {
    if (!this->size) {
        std::cerr << "The stack is empty, cannot pop" << std::endl;
    } else {
        --this->size;
        return this->contents[this->size];
    }
}

template <typename T>
bool Stack<T>::empty() {
    return this->size == 0;
}

template <typename T>
T Stack<T>::top() {
    if (!this->size) {
        std::cerr << "Empty stack, can't get pop" << std::endl;
    } else {
        return this->contents[this->size - 1];
    }
}

template <class T>
Stack<T>::~Stack() {
    delete [] this->contents;
}

template <class T>
T Stack<T>::get(int num) {
    return this->contents[num];
}

template <class T>
int Stack<T>::getSize() {
    return this->size;
}

#endif