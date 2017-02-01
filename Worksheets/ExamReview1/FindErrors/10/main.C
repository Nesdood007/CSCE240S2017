/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #10: Initialize me not
*/
#include <iostream>

using namespace std;

int main() {
    
    int a[10];
    int * b;
    
    for (int i = 0; i < 10; i++) {
        b[i] = a[i];
    }
    
    return 0;
}