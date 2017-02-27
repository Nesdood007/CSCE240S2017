#include "class.h"

Hole::Hole() {
    a = new int[5];
    b = 5;
    for (int i = 0; i < b; i++) {
        a[i] = i;
    }
}
Hole::~Hole() {
    delete [] a;
}
void Hole::foo() {
    delete [] a;
    b++;
    a = new int[b];
    for (int i = 0; i < b; i++) {
        a[i] = i;
    }
}
void Hole::fill(int q) {
    for (int i = 0; i < b; i++) {
        a[i] = q;
    }
}
ostream& operator<<(ostream& out, const Hole &h) {
    for (int i = 0; i < h.b; i++) {
        out << h.a[i] << " ";
    }
    out << endl;
    return out;
}
void f(Hole& a, Hole& b) {
    b.b = a.b;
    for (int i = 0; i < a.b; i++) {
        b.a[i] = a.a[i];
    }
}
