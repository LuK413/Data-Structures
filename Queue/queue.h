#IFNDEF QUEUE_H
#DEFINE QUEUE_H
    
class Queue {
private:
    int *contents;
    int size;
    int capacity;
public:
    int getSize();
    int get(int num);
    Queue();
    void enqueue(int num);
    int  dequeue(int num);
    bool empty();
    int head();
    int tail();
};

#ENDIF