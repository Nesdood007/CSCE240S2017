#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

class LinkedList {
    Node* head;
    public:
        LinkedList();
        void append(int);
        void insert(int, int);
        int size();
        int get(int);
        friend class Node;
};

class Node {
    Node *next;
    int data;
    public:
        Node();
};



#endif