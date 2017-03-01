#include "class.h"

String::String() {
    str = new char[0];
    len = 0;
}
String::String(const char *a) {
    str = new char[strlen(a)];
    strcpy(str, a);
    len = strlen(a);
}
String::~String() {
    delete [] str;
}
char* String::getCharArray() {
    return str;
}
int String::length() {
    return len;
}
char String::charAt(int a) {
    if (a < len && a > 0) {
        return str[a];
    } else {
        cerr << "Bad Index" << endl;
        return '\0';
    }
}
String& String::operator+(const String& a) {
    char *temp = new char[len + a.len];
    strcpy(temp, str);
    strcat(temp,a.str);
    String *toReturn = new String(temp);
    return *toReturn;
}
String& String::operator+=(const String& a) {
    char *temp = new char[len + a.len];
    strcpy(temp, str);
    strcat(temp,a.str);
    delete [] str;
    str = temp;
    return *this;
}
ostream& operator<<(ostream& out, const String& a) {
    out << a.str;
    return out;
}
