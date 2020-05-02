#include "stack.h"

template <typename T>
Stack<T>::Stack() {
    this->contents = new T[2];
    this->size = 0;
    this->capacity = 2;
}

template <typename T>
void Stack<T>::push(T data) {
    if (this->size == this->capacity) {
        // int capacity = this->capacity;
        // int size = this->size;
        T *temp = new T[capacity * 2];
        T *rm = this->contents;

        for (int i = 0; i < this->size; ++i) 
            temp[i] = this->contents[i];

        this->contents = temp;
        delete [] rm;
        this->capacity *= 2;
    }

    this->contents[this->size] = data;
    ++size;
}

template <typename T>
T Stack<T>::pop() {
    --this->size;
    return this->contents[this->size];
}

template <typename T>
bool Stack<T>::empty() {
    return this->size == 0;
}

template <typename T>
T Stack<T>::top() {
    return this->contents[this->size - 1];
}

template <typename T>
Stack<T>::~Stack<T>() {
    delete [] this->contents;
}