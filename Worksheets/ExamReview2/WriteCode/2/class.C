#include "class.h"

Stack::Stack() {
    head = NULL;
}
Stack::~Stack() {
    while (head != NULL) {
        pop();
    }
}
void Stack::push(int a) {
    if (head == NULL) {
        head = new Node(a, NULL);
    } else {
        Node *temp = new Node(a, head);
        head = temp;
    }
}
int Stack::peek() {
    if (head != NULL) {
        return head -> data;
    }
    cerr << "ERROR" << endl;
    throw -1;
}
int Stack::pop() {
    if (head != NULL) {
        int toReturn = head -> data;
        Node *toDelete = head;
        head = head -> child;
        delete toDelete;
        return toReturn;
    }
    cerr << "ERROR" << endl;
    throw -1;
}
bool Stack::isEmpty() {
    return head == NULL;
}

Node::Node(int a, Node *b) {
    data = a;
    child = b;
}
