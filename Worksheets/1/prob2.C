//Worksheet for SI Session: 30Jan2017
#include <iostream>
#include <cstring>

using namespace std;

//Simple CString Exercise
int main() {
    char a[] = "Hello";
    char b[] = {'h','i','\0'};
    
    char * c;

    cout << a << " " << b << endl;
    
    cout << strlen(a) << " " << strlen(b) << endl;

    c = new char[strlen(a)];

    strcpy(c, a);

    cout << strcmp(a, c) << endl;

    return 0;
}
