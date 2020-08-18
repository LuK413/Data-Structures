#include <iostream>
#include <exception>
#include <string>
#include "stack.h"

int main(int argc, char const *argv[]) {
    Stack<int> s;
    std::string c;
    while (std::cin >> c) {
        if (c == "quit") {
            break;
        }
        
        std::string input;
        if (c == "push") {
            std::cin >> input;
            s.push(std::stoi(input));
        } else if (c == "pop") {
            const int result = s.pop();
            std::cout << "Just popped " << result << std::endl;
        } else if (c == "top") {
            const int result = s.top();
            std::cout << "Top of the stack: " << result << std::endl;
        } else if (c == "empty") {
            const std::string result = s.empty() ? "empty" : "not empty";
            std::cout << "The stack is " << result << std::endl;
        } else {
            std::cout << "Invalid command, try again" << std::endl;
        }
    }
    return 0;
}