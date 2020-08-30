#include "linkedlist.h"
#include <utility>

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

void Node::addToFront(int data) {

}

int Node::ithNode() {

}

int Node::getHead() {
     
}

int Node::getTail() {

}

Node::~Node() {
    delete next;
}