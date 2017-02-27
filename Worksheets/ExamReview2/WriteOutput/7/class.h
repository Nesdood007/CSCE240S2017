#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespacce std;

class Hole {
    int *a = new int[5];
    int b = 5;
    public:
        Hole();
        ~Hole();
        void foo();
        void fill(int);
        friend void a(const Hole&, Hole&);
        ostream& operator<<(ostream&);
}

#endif