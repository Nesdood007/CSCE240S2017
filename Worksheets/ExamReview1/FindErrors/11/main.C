/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #11: Bad Assignment of Arrays
*/
#include <iostream>

using namespace std;

int main() {
    int a[] = {0,1,2,3};
    int b[4];
    
    b = a;
    
    cout << b << endl;
    return 0;
}