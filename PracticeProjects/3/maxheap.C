#include "maxheap.h"

MaxHeap::MaxHeap() {
    head = NULL;
}
MaxHeap::~MaxHeap() {
    while (!isEmpty()) {
        Pop();
    }
}
void MaxHeap::Push(int d) {
    
}
int MaxHeap::Pop() {
    return 0;
}
bool MaxHeap::isEmpty() {
    return false;
}
Node::Node(int d, Node * par, Node * l, Node * r) {
    data = d;
    parent = par;
    left = l;
    right = r;
}