//Worksheet for SI Session: 30Jan2017
#include <iostream>

using namespace std;

//Harder Pointer Exercise
int main() {
    int a[10];
    int a_size = 10;
    int * b;

    for (int i = 0; i < a_size; i++) {
        a[i] = i;
    }

    b = &a[0];

    for (int i = 0; i < a_size; i++) {
        cout << *b++ << " " << a[i] << endl;
    }
    
    return 0;
}
