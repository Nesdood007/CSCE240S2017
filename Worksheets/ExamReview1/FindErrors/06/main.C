/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #6: Assigning the Statement
*/
#include <iostream>

using namespace std;

int main() {
    int a = -1337;
    
    if (a = 1) {
        cout << "A is 1" << endl;
    }
    
    return 0;
}