#include <iostream>
#include <exception>
#include "stack.h"

int main(int argc, char const *argv[]) {
    Stack<float> s;
    // Stack s;
    if (s.empty())
        std::cout << "empty" << std::endl;
    s.push(1);
    s.push(5);
    for (int i = 0; i < s.getSize(); ++i) {
        std::cout << s.get(i) << std::endl;
    }
    s.push(3);
    s.push(33);
    s.push(2312);
    std::cout << s.top() << std::endl;
    std::cout << "just popped " << s.pop() << " from stack" << std::endl;
    for (int i = 0; i < s.getSize(); ++i) {
        std::cout << s.get(i) << std::endl;
    }
    return 0;
}