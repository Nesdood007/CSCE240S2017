class A {
    int a = 5;
    int b = 156;
    public:
        A();
        void foo();
}
void copy(const A& ref, const A& a) {
    a.a = ref.a;
    a.b = ref.b;
}