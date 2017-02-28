String::String() {
    str = new char[0];
    length = 0;
}
String::String(char *a) {
    strcpy(str, a);
    length = strlen(a);
}
String::~String() {
    delete [] str;
}
char* String::getCharArray() {
    return str;
}
int String::length() {
    return length;
}
char String::charAt(int a) {
    if (a < length && a > 0) {
        return str[a];
    } else {
        cerr << "Bad Index" << endl;
        return '';
    }
}
String& String::operator+(const String& a) {
    char *temp = new char[length + a];
    strcpy(temp, str);
    strcat(temp,a);
    String *toReturn = new String(temp);
    return toReturn;
}
String& String::operator+=(const String& a) {
    char *temp = new char[length + a];
    strcpy(temp, str);
    strcat(temp,a);
    delete [] str;
    str = temp;
    return *this;
}
ostream& operator<<(ostream& out, const String& a) {
    out << str;
    return out;
}