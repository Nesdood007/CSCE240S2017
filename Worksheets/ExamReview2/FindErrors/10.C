void f1(const int * p, int p_size) {
    p++;
    p[0] = 10;
    *p = 0;
}

void f2(int const * a, int a_size) {
    a[0] = 55;
    *a = 45;
}

void f3(int * const p, int p_size) {
    p++;
    *p = 0;
}

class A {
    public:
        int a, b;
        const int c;
        A(): a(0), b(0), c(105) {}
        ~A();
        void g()const;
        int g1();
}

void f4(const A &a) {
    a.g();
    a.g1();
}

void A::g()const {
    a++;
    b--;
}

int A::g1() {
    return c + 1;
}