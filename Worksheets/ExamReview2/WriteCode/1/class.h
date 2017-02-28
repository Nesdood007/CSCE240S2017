#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *str;
    int length;
    public:
        String();
        String(char *);
        ~String();
        char* getCharArray();
        int length();
        char charAt(int);
        String& operator+(const String&);
        String& operator+=(const String&);
        friend ostream& operator<<(ostream&, const String&);
};
#endif