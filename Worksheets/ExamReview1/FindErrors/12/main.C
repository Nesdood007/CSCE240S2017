/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #12: Delete me not
*/
#include <iostream>

using namespace std;

int main() {
    
    int a[10];
    int *b = new int[10];
    
    for (int i = 0; i < 10; i++) {
        b[i] = a[i];
        cout << b[i] << endl;
    }
    
    return 0;
}