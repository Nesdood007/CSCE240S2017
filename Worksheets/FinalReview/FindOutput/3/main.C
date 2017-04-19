#include <iostream>
#include "A.h"

int main() {
    int *a = new int[10];
    int b = {5,4,3,2,1};
    int *c = &b[1];
    for (int i = 0; i < 10; i++) {
        *(a++) = i;
    }
    c++;
    a[2] += c;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}