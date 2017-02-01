/*  This section will have you write some c++ code to do something
    
    Question #1: Concatinate 2 Strings
*/
#include <iostream>
#include <cstring>

using namespace std;

//Given CStrings a and b, finish the function to concatinate the two strings
char* concatinate (const char * a, const char * b){
    char * c = new char[strlen(a) + strlen(b)];
    for (int i = 0; i < strlen(a) + strlen(b); i++) {
        if (i < strlen(a)) {
            c[i] = a[i];
        } else {
            c[i] = b[i - strlen(a)];   
        }
    }
    return c;
}

int main() {
    char a[] = "Hello ";
    char b[] = "World"; 
    cout << concatinate(a, b) << endl;
    return 0;
}