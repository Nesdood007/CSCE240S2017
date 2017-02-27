#include "Class.h"

int a = 3;

A::A() {
    a = 0;
    b = 1;
}
A::A(const A& ref) {
    a = ref.a + ref.b;
    b = ref.b * 2;
}
void A::foo() {
    a++;
    b--;
}
void A::bar() {
    a--;
    b++;
}

ostream& A::operator<<(ostream& out) {
    out << a << " " << b;
    return out;
}

void f1(const A& a1, const A& a2) {
    a--;
    a1.foo();
    a2.bar();
    if (a > 0) {
        f1(a1, a2);
    }
}