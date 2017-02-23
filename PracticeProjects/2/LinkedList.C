#include "LinkedList.h"

LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::append(int data) {
    if (head == NULL) {
        head = new Node(data, NULL);
    } else {
        Node *curr = head;
        while (curr != NULL) {
            curr = head -> next;
        }
        curr = new Node(data, NULL);
    }
}
void LinkedList::insert(int position, int data) {
    
}
int LinkedList::size() {
    Node *curr = head;
    int size;
    for (size = 0; curr != NULL; size++) {
        curr = head -> next;
    }
    return size;
}
int LinkedList::get(int index) {
    if (head != NULL) {
        Node *curr = head;
        for (int i = 0; i <= index && curr -> next != NULL; i++) {
            curr = curr -> next;
        }
        return curr -> data;
    }
    cout << "Invalid Index" << endl;
    return 0;
}

Node::Node() {
    data = 0;
    next = NULL;
}

Node::Node(int d, Node *n) {
    data = d;
    next = n;
}
