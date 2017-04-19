#include <iostream>
#include <vector>
#include "A.h"

int main() {
    vector<int> vec;
    
    for (int i = 0; i < 5; i++) {
        vec.push_back(i);
    }
    vector<int>::iterator a;
    for (a = vec.begin(); a != vec.end(); a++) {
        *a++;
    }
    for (a = vec.end(); a != vec.begin(); a--) {
        cout << *a << " ";
    }
    cout << endl;
}