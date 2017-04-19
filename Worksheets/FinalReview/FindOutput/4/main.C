#include <iostream>
#include "A.h"

int main() {
    int a = 0;
    for (int i = a; i < 10; i++) {
        for (int j = a + 1; j < 11; j++) {
            a++;
        }
    }
    cout << a << endl;
}