#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespace std;

class Node;

class Stack {
    Node *head;
    public:
        Stack();
        ~Stack();
        void push(int);
        int peek();
        int pop();
        bool isEmpty();
};

class Node {
    int data;
    Node *child;
    public:
        Node(int, Node *);
        friend class Stack;
};
#endif