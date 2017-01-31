//Worksheet for SI Session: 30Jan2017
#include <iostream>

using namespace std;

//Problems are contained in the functions prob1 to prob4
int main() {
    prob1();
    prob2();
    prob3();
    prob4();
}

//Simple pointer exercise
void prob1() {
    int a[] = {0,1,2,3,4};
    int * b = new int[5];

    for (int i = 0; i < 5; i++) {
        b[i] = a[i];
        cout << b[i] << endl;
    }

    delete [] b;
}

//Simple CString Exercise
void prob2() {
    char a[] = "Hello";
    char b[] = {'h','i','\0'};

    cout << a << " " << b << endl;
}

//Harder Pointer Exercise
void prob3() {
    int a[10];
    int a_size = 10;
    int * b;

    for (int i = 0; i < a_size; i++) {
        a[i] = i;
    }

    b = &a[0];

    for (int i = 0; i < a_size; i++) {
        cout << b++ << " " << a[i] << endl;
    }
}

//Concatinating two arrays: Have them write this code and
//put combined array in *c
void prob4() {

    int a[] = {0,1,2,3,4};
    int b[] = {5,6,7,8,9};
    int * c;

    //Write code here.
    //Don't forget to print out the array from pointer c
}
