/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #13: Post-mortem access and bad increment
*/
#include <iostream>

using namespace std;

int main() {
    
    int a[3];
    int * b = new int [3];
    
    for (int i = 0; i++ < 3;) {
        b[i] = a[i];
    }
    
    delete b[];
    
    cout << b[2] << endl;
    
    return 0;
}