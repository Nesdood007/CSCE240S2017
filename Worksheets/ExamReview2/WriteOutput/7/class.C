#include "class.h"

Hole::Hole() {
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
ostream& Hole::operator<<(ostream& out) {
    for (int i = 0; i < b; i++) {
        out << a[i] << " ";
    }
    out << endl;
}
void copy(const Hole& a, Hole& b) {
    b.b = a.b;
    for (int i = 0; i < a.b; i++) {
        b.a[i] = a.a[i];
    }
}