#include <iostream>
#include "A.h"

int main() {
    int *a = new int [10];
    for (int i = 9; i >= 0; --i) {
        a[i] = i * 2;
    }
    for (int i = 0; i < 10; i++) {
        cout << ++*a << endl;
    }
}