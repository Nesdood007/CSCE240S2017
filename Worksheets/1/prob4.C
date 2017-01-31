//Worksheet for SI Session: 30Jan2017
#include <iostream>

using namespace std;

//Concatinating two arrays: Have them write this code and
//put combined array in *c
int main() {
    int a[] = {0,1,2,3,4};
    int b[] = {5,6,7,8,9};
    int * c;

    //Write code here.
    //Don't forget to print out the array from pointer c
    
    int a_size = 5;
    int b_size = 5;

    c = new int[a_size + b_size];

    for (int i = 0; i < a_size + b_size ; i++) {
        if (i < a_size) {
            c[i] = a[i];
        } else {
            c[i] = b[i - b_size];
        }
    }

    for (int i = 0; i < a_size + b_size; i++) {
        cout << c[i];
    }

    cout << endl;

    delete [] c;

    return 0;
}

