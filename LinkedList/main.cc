#include "linkedlist.h"
#include <iostream>
#include <string>

// Non-robust example harness for linked list
int main(int argc, char const *argv[]) {
    LinkedList *list = new LinkedList();
    std::string c;
    
    while (std::cin >> c) {
        if (c == "quit") {
            break;
        }

        std::string input;
        int data;
        int position;
        if (c == "print") {
            list->printList();
        } else if (c == "add") {
            std::cin >> input;
            if (input == "front") {
                std::cin >> data;
                list->addToFront(data);
            } else if (input == "ith") { // buggy
                std::cin >> data;
                std::cin >> position;
                list->addToIth(data, position);
            } else if (input == "back") {
                std::cin >> data;
                list->addToBack(data);
            }
        } else if (c == "front") { 
            std::cout << list->front() << std::endl;
        } else if (c == "ith") {
            std::cin >> position;
            std::cout << list->ith(position) << std::endl;
        } else if (c == "back") {
            std::cout << list->back() << std::endl;
        } else if (c == "delete") {
            std::cin >> input;
            if (input == "front") { // buggy
                list->deleteFromFront();
            } else if (input == "ith") {
                std::cin >> position;
                list->deleteFromIth(position);
            } else if (input == "back") { // buggy
                list->deleteFromBack();
            }
        } else {
            std::cout << "Unknown command." << std::endl;
        }
    }
    
    delete list;
    return 0;
}