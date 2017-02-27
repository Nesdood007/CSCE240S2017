#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespace std;

class Hole {
    int *a;
    int b;
    public:
        Hole();
        ~Hole();
        void foo();
        void fill(int);
        friend void f(Hole&, Hole&);
        friend ostream& operator<<(ostream&, const Hole&);
};

#endif
