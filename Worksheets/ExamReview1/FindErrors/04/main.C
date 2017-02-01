/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #4: Not a Nintendo Switch
*/
#include <iostream>

using namespace std;

int main() {
    
    int a = 1;
    
    switch (a) {
        case a > 0:
            cout << "A is Greater than 0" << endl;
        case a == 0:
            cout << "A is Zero" << endl;
        case a < 0:
            cout << "A is Less than Zero" << endl;
    }
    
    return 0;
}