#include "LinkedList.h"

int main() {
    LinkedList ll = new LinkedList();
    for (int i = 0; i < 20; i++) {
        ll.append(i);
    }
    
    for (int i = 0; i < 20; i++) {
        cout << ll.get(i);
    }
    cout << endl;
}