/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #7: Floating Error
*/
#include <iostream>

using namespace std;

int main() {
    
    float a = 9222524.024659756321457753215465135462168432;
    float b = 9222524.024659756321457753215465135462168432;
    
    if (a == b) {
        cout << "A and B are the same" << endl;
    }
    
    return 0;
}