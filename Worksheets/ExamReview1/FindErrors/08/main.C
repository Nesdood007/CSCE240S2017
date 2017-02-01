/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #8: Undefined Behaviour
*/
#include <iostream>

using namespace std;

int main() {
    
    int i = 0;
    
    cout << i++ << " " << ++i << endl;
    
    return 0;
}