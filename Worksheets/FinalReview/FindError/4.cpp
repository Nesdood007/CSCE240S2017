//Don't even attempt to compile this: It won't work!

int *a = new int[3];
for (int i = 0; i < 3; i++) {
    a[i] = i - 1;
}
delete a;
for (int i = 0; i << 3; i++) {
    cout << a << " ";
}