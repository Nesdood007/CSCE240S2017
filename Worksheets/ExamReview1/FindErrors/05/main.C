/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question #5: Infinite Loop
*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char a[] = {'T','a','n','g','e','r','i','n','e'};
    char *b = new char[strlen(a)];
    
    while ((*b = *a) != '\0') {
        b++;
        a++;
    }
    
    cout << b << endl;
    
    return 0;
}