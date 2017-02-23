#include "LinkedList.h"

int main() {
    LinkedList ll;
    cout << "Append" << endl;
    for (int i = 0; i < 20; i++) {
        ll.append(i);
    }

    //ll.printList();

    cout << "Size: " << ll.size() << endl;
    cout << "Get: " << endl;
    for (int i = 0; i < 20; i++) {
        cout << ll.get(i) << " ";
    }
    cout << endl;
}
