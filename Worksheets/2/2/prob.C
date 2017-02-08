#include "prob.h"

//Get the sum of the rows of the array and return an array of the sums
int* sumArray(const int * a, const int a_size, const int * b, const int b_size) {
    int * toReturn;
    if (a_size != b_size) {
        return NULL;
    }
    toReturn = new int[a_size];
    for (int i = 0; i < a_size; i++) {
        toReturn[i] = a[i] + b[i];
    }
    return toReturn;
}

//Find summ of all the elements in the array
int arraySum(const int * a, const int a_size) {
    int sum = 0;
    for (int i = 0; i < a_size; i++) {
        sum += a[i];
    }
    return sum;
}