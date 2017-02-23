#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

class Node;

class LinkedList {
    Node* head;
    public:
        LinkedList();
        void append(int);
        void insert(int, int);
        int size();
        int get(int);
};

class Node {
    Node *next;
    int data;
    public:
        Node();
        Node(int, Node*);
        friend class LinkedList;
};
#endif
