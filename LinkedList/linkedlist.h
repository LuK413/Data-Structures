class Node {
private:
    int data;
    Node *next;
    void swap(Node &);
public:
    Node(int data, Node *next);
    Node(const Node &other);
    Node(Node &&other);
    Node &operator=(const Node &other);
    Node &operator=(Node &&other);
    void addToFront(int data);
    int ithNode();
    int getHead();
    int getTail();
    ~Node();
};