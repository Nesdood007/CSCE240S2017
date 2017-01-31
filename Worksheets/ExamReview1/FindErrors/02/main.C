/*  This .C file is not designed to be compiled, so Don't do it.
        Contains the part of the worksheet that will be on finding the errors in code
        
    Question 2: Strcpy() without initialization
*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char a[] = "Its-a-me Mario!";
    char * b;
    strcpy(b, a);
    cout << b << endl;
    
    return 0;
}