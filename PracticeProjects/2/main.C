#include "LinkedList.h"

int main() {
    LinkedList ll;
    cout << "Append" << endl;
    for (int i = 0; i < 20; i++) {
        //cout << i << endl;
        ll.append(i);
    }

    ll.printList();

    cout << "Size: " << ll.size() << endl;
    cout << "Get: " << endl;
    for (int i = 0; i < 20; i++) {
        cout << ll.get(i) << " ";
    }
    cout << endl;

    cout << "Insert Test" << endl;
    for (int i = 0; i < 10; i++) {
        ll.insert(i,-1 * i);
    }

    ll.printList();
    
    cout << "Removal Test" << endl;
    for (int i = 0; i < 10; i++) {
        ll.remove(i * 2);
    }
    
    ll.printList();

}
