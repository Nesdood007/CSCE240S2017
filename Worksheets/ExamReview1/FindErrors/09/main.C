/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #9: Modifying that which cannot be modified
*/
#include <iostream>

using namespace std;

int main() {
    
    const int hello = 42;
    
    cout << hello++ << endl;
    
    return 0;
}