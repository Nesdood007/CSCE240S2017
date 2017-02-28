/*  Solution to FE10
        Explanation:
            const int * c and int const * c behave in the same way, where c is a variable pointer to a constant integer
            int * const c1 -> c1 is constaht pointer to variable integer
            int const * const c2 -> constant pointer to constant integer
            
            Functions with const will not be able to modify any variables in the object

*/
//Pointer can change but not value
void f1(const int * p, int p_size) {
    p++; //OK
    p[0] = 10; //Bad
    *p = 0; //Bad
}

//Pointer can change but not value
void f2(int const * a, int a_size) {
    a[0] = 55; //Bad
    *a = 45;//Bad
}

//Pointer can't be changed
void f3(int * const p, int p_size) {
    p++;//Bad
    *p = 0;//OK
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
    a.g1();//Calls non-const function. Bad
}

//Modifies things in the class
void A::g()const {
    a++;
    b--;
}

int A::g1() {
    return c + 1;
}