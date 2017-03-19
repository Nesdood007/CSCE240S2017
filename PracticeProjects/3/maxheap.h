#ifndef MAXHEAP_H
#define MAXHEAP_H

using namespace std;

class Node;

class MaxHeap {
    Node * head;
    public:
        MaxHeap();
        ~MaxHeap();
        void Push(int);
        int Pop();
        bool isEmpty();
};

class Node {
    Node * left;
    Node * right;
    Node * parent;
    int data;
    public:
        Node(int, Node *, Node *, Node *);
        friend class MaxHeap;
};

#endif