struct Node {
    Node *next;
    int data;
    Node(int data);
};

class LinkedList {
private:
    Node *head;
public:
    LinkedList();
    void addToFront(int data);
    int ithNode();
    int getHead();
    int getTail();
    ~LinkedList();
}