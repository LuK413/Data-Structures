#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node *next;
    /* 
        The code below is not necessary at all for the LinkedList. I implemented
        it for practice and for use with the Node structure.
    */
    void swap(Node &);
    Node(int data, Node *next);
    Node(const Node &other);
    Node(Node &&other);
    Node &operator=(const Node &other);
    Node &operator=(Node &&other);
    ~Node();
};

class LinkedList {
private:
    Node *head;
public:
    LinkedList();
    void printList();
    void addToFront(int);
    void addToIth(int, int);
    void addToBack(int);
    int front();
    int ith(int);
    int back();
    void deleteFromFront();
    void deleteFromIth(int);
    void deleteFromBack();
};

#endif