#include "class.h"

A::A() {
    cout << "Constructed" << endl;
    a = 2;
    b = 5;
}
A::A(const A& ref) {
    cout << "Copied" << endl;
    a = ref.a * 2;
    b = ref.b + 2;
}
A::~A() {
    cout << "Destroyed" << endl;
}
void A::foo() {
    a++;
    b--;
}
void A::bar() {
    a--;
    b++;
}
A f1(A a) {
    a.foo();
    a.bar();
    return a;
}
A f2(A& a) {
    a.foo();
    a.bar();
    return a;
}
A& f3(const A& a) {
    a.foo();
    a.bar();
    return a;
}
ostream& operator<<(ostream& out, const A& a) {
    out << a.a << " " << a.b << endl;
    return out;
}