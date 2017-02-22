#include "LinkedList.h"

LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::append(int data) {
    if (head == NULL) {
        head = new Node();
        head -> data = data;
    } else {
        Node *curr = head;
        while (curr != NULL) {
            curr = head -> next;
        }
        curr = new Node();
        curr -> data = data;
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
    Node *curr = head;
    int i = 0;
    while (curr != NULL) {
        curr = head -> next;
        
        if (i == index) {
            return curr -> data;
        }
        i++;
    }
    return NULL;
}