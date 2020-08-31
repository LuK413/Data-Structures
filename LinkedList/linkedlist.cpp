#include "linkedlist.h"
#include <utility>
#include <iostream>

Node::Node(int data, Node *next): data{data}, next{next} {}

Node::Node(const Node &other): data{other.data}, next{other.next ? new Node{*other.next} : nullptr} {}

Node::Node(Node &&other): data{other.data}, next{other.next} {
    other.next = nullptr;
}

void Node::swap(Node &other) {
    using std::swap;
    swap(this->data, other.data);
    swap(this->next, other.next);
}

Node &Node::operator=(const Node &other) {
    Node temp{other};
    swap(temp);
    return *this;
}

Node &Node::operator=(Node &&other) {
    swap(other);
    return *this;
}

Node::~Node() {
    delete next;
}

LinkedList::LinkedList(): head{nullptr} {}

void LinkedList::printList() {
    Node *currNode = this->head;
    std::cout << "[";
    while (currNode) {
        std::cout << currNode->data;
        currNode = currNode->next;
        if (currNode) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

void LinkedList::addToFront(int data) {
    Node *newNode = new Node{data, this->head};
    this->head = newNode;
}

// position is the element number, not the index
void LinkedList::addToIth(int data, int position) {
    if (position == 1) {
        this->addToFront(data);
        return;
    }
    Node *newNode = new Node{data, nullptr};
    Node *currNode = head;
    Node *preNode = nullptr;
    for (int i = 1; i < position; ++i) {
        preNode = currNode;
        currNode = currNode->next;
    }
    preNode->next = newNode;
    newNode->next = currNode;
}

void LinkedList::addToBack(int data) {
    if (!this->head) {
        this->addToFront(data);
        return;
    }

    Node *currNode = this->head;
    while (currNode->next) {
        currNode = currNode->next;
    }
    
    Node *newNode = new Node{data, nullptr};
    currNode->next = newNode;
}

int LinkedList::front() {
    return this->head->data;
}

int LinkedList::ith() {
    
}

int LinkedList::back() {
    Node *currNode = this->head;
    while (currNode->next) {
        currNode = currNode->next;
    }
    return currNode->data;
}

void LinkedList::deleteFromFront() {
    
}

void LinkedList::deleteFromIth(int) {
    
}

void LinkedList::deleteFromBack() {
    
}