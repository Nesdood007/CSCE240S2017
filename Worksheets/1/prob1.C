//Worksheet for SI Session: 30Jan2017
#include <iostream>

using namespace std;

//Simple pointer exercise
int main() {
    int a[] = {0,1,2,3,4};
    int * b = new int[5];

    for (int i = 0; i < 5; i++) {
        b[i] = a[i];
        cout << b[i] << endl;
    }

    delete [] b;
    
    return 0;
}