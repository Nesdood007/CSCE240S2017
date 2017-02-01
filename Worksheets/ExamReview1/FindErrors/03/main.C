/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #3: Array Out of Bounds?
*/
#include <iostream>

using namespace std;

int main() {
    
    int a[5];
    
    for (int i = 15; i >= 0; i--) {
        a[i - 1] = i;
    }
    
    cout << a[6] << endl;
    
    return 0;
}