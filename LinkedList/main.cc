#include "linkedlist.h"
#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
    Node *head = new Node{3, new Node{2, new Node{1, nullptr}}};
    std::string c;
    
    while (std::cin >> c) {
        if (c == "quit") {
            break;
        }

        std::string input;
        if (c == "") {

        } else if (c == "") {

        } else {
            std::cout << "Invalid command, try again" << std::endl;
        }
    }
    
    delete head;
    return 0;
}