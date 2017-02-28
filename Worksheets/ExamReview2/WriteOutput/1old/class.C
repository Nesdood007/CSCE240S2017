#include "class.h"

Class::Class() {
    cout << "Constructed" << endl;
    a = 0;
}

Class::Class(const Class& ref) {
    cout << "Copied" << endl;
    a = ref.a + 1;
}

Class::~Class() {
    cout << "Deleted" << endl;
    cout << "A is " << a << endl;
}

void Class::foo() {
    a += 2;
}

void f1(Class a) {
    Class b = a;
    b.foo();
    a.foo();
}
void f2(Class& a) {
    Class *b = &a;
    a.foo();
    (*b).foo();
}
Class f3(Class a) {
    a.foo();
    Class b = a;
    return b;
}
Class f4(Class a) {
    a.foo();
    Class b = a;
    b.foo();
    return b;
}
Class& f5(Class &a) {
    return a;
}
