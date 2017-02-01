/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
        Question #14: Deleting the First element
*/
#include <iostream>

using namespace std;

int main() {
    
    int * a = new int[10];
    
    for (int i = 0; i < 10; i++) {
        a[i] = i * 3;
        cout << a[i] << endl;
    }
    
    delete a;
    
    return 0;
}