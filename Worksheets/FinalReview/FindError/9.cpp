//Don't even attempt to compile this: It won't work!

void foo(int a) const {
    a++;
    for (int i = 0; i < a; i++) {
        cout << "240";
    }
}