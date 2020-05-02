#include "stack.h"

// template <typename T>
// Stack<T>::Stack() {
//     this->contents = new T[2];
//     this->size = 0;
//     this->capacity = 2;
// }

// template <typename T>
// void Stack<T>::push(T data) {
//     if (this->size == this->capacity) {
//         // int capacity = this->capacity;
//         // int size = this->size;
//         T *temp = new T[capacity * 2];
//         T *rm = this->contents;

//         for (int i = 0; i < this->size; ++i) 
//             temp[i] = this->contents[i];

//         this->contents = temp;
//         delete [] rm;
//         this->capacity *= 2;
//     }

//     this->contents[this->size] = data;
//     ++size;
// }

// template <typename T>
// T Stack<T>::pop() {
//     try {
//         if (this->size == 0)
//             throw 0;
//         --this->size;
//         return this->contents[this->size];
//     } catch (int e) {
//         std::cerr << "The stack is empty, cannot pop." << std::endl;
//     }
    
// }

// template <typename T>
// bool Stack<T>::empty() {
//     return this->size == 0;
// }

// template <typename T>
// T Stack<T>::top() {
//     try {
//         return this->contents[this->size - 1];
//     } catch (std::exception e) {
//         std::cerr << "Could not pop. " << e.what() << std::endl;
//     }
// }

// template <typename T>
// Stack<T>::~Stack() {
//     delete [] this->contents;
// }

// template <typename T>
// T Stack<T>::get(int num) {
//     return this->contents[num];
// }

// template <typename T>
// int Stack<T>::getSize() {
//     return this->size;
// }

// std::ostream &operator<<(std::ostream &out, const Stack<T> &s) {
//     for (int i = 0; i < s.size; ++i) {
//         out << s.contents[i] << std::endl;
//     }
//     return out;
// }

Stack::Stack() {
    this->contents = new int[2];
    this->size = 0;
    this->capacity = 2;
}

void Stack::push(int data) {
    if (this->size == this->capacity) {
        // int capacity = this->capacity;
        // int size = this->size;
        int *temp = new int[capacity * 2];
        int *rm = this->contents;

        for (int i = 0; i < this->size; ++i) 
            temp[i] = this->contents[i];

        this->contents = temp;
        delete [] rm;
        this->capacity *= 2;
    }

    this->contents[this->size] = data;
    ++size;
}

int Stack::pop() {
    try {
        if (this->size == 0)
            throw 0;
        --this->size;
        return this->contents[this->size];
    } catch (int e) {
        std::cerr << "The stack is empty, cannot pop." << std::endl;
    }
    
}

bool Stack::empty() {
    return this->size == 0;
}

int Stack::top() {
    try {
        return this->contents[this->size - 1];
    } catch (std::exception e) {
        std::cerr << "Could not pop. " << e.what() << std::endl;
    }
}

Stack::~Stack() {
    delete [] this->contents;
}

int Stack::get(int num) {
    return this->contents[num];
}

int Stack::getSize() {
    return this->size;
}
