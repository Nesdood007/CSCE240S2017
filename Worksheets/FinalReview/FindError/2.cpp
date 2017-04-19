//Don't even attempt to compile this: It won't work!

int *a = {0,1,2,3,4,5};
for (int i = 0; i < 6; i++) {
    *(++a) = 2;
}
cout << a[2] << endl;
