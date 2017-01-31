/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question 1: Wrong Initialization of Arrays
*/
#include <iostream>

using namespace std;

int main() {
    
    int a[] = new int[10];
    int sum = 0;
    
    for (int i = 0; i < 10; i++) {
        a[i] = i + sum;
        sum = a[i];
    }
    
    cout << sum << endl;
    
    return 0;
}