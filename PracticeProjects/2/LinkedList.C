#include "LinkedList.h"

LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::append(int data) {
    //cout << "OK" << endl;
    if (head == NULL) {
        head = new Node(data, NULL);
    } else {
        //cout << "Appending " << data << endl;
        Node *curr = head;
        while (curr -> next != NULL) {
            curr = curr -> next;
        }
        curr -> next = new Node(data, NULL);
    }
}
void LinkedList::insert(int position, int data) {
    if (head != NULL && position >= 0) {
        Node *curr = head;
        for (int i = 0; i < position && curr != NULL; i++) {
            curr = curr -> next;
        }
        Node *newNode = new Node (data, curr -> next);
        curr -> next = newNode;
    } else if (head == NULL && position == 0) {
        head = new Node(data, NULL);
    } else {
        cerr << "Invalid Index" << endl;
        throw "Invalid Index";
    }
}
int LinkedList::size() {
    Node *curr = head;
    int size;
    for (size = 0; curr != NULL; size++) {
        //cout << size << endl;
        curr = curr -> next;
    }
    return size;
}
int LinkedList::get(int index) {
    if (head != NULL) {
        Node *curr = head;
        for (int i = 0; i < index && curr -> next != NULL; i++) {
            curr = curr -> next;
        }
        return curr -> data;
    }
    cout << "Invalid Index" << endl;
    return 0;
}

void LinkedList::printList() {
    cout << "LinkedList: ";
    Node *curr = head;
    while (curr != NULL) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;
}

//Removes the Node at a given Index
void LinkedList::remove(int index) {
    if (index >=0 && head != NULL) {
        Node *curr = head, *oldCurr = NULL;
        for (int i = 0; i < index && curr != NULL; i++) {
            cout << i << endl;
            if(oldCurr == NULL) {
                oldCurr = curr;
            } else {
                oldCurr = oldCurr -> next;
            }
            curr = curr -> next;
        }
        oldCurr -> next = curr -> next;
        delete curr;
    } else {
        cerr << "Invalid Index" << endl;
        throw "Invalid Index";
    }
}

Node::Node() {
    data = 0;
    next = NULL;
}

Node::Node(int d, Node *n) {
    data = d;
    next = n;
}
