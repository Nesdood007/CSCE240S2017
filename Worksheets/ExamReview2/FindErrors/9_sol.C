class A {
    int a = 5;
    int b = 156;
    public:
        A();
        void foo();
}
//copy is not a friend functions and as such cannot access its private variables
void copy(const A& ref, const A& a) {
    a.a = ref.a;
    a.b = ref.b;
}