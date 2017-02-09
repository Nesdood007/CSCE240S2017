#include "prob.h"

/*  Get the sum of the rows of the array and return an array of the sums
 *      const int *a -> Array a 
 *      const int a_size -> Size of Array a
 *      const int *b -> Array b
 *      const int b_size -> Size of Array b
 */ 
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

/*  Find sum of all the elements in the array
 *      Const int *a -> Array a
 *      const int a_size -> Size of Array a
 */
int arraySum(const int * a, const int a_size) {
    int sum = 0;
    for (int i = 0; i < a_size; i++) {
        sum += a[i];
    }
    return sum;
}

//Solutions to Write Your Own Code Part

/*  Finds the Largest Number in the Array
 *      const int *a -> Array a
 *      const int a_size -> Size of Array a
 */
int largestNumber(const int *a, const int a_size) {
    int toReturn = a[0];
    for (int i = 0; i < a_size; i++) {
        if (a[i] > toReturn) toReturn = a[i];
    }
    return toReturn;
}

/*  Finds the Smallest Number in the Array
 *      const int *a -> Array a
 *      const int a_size -> Size of Array a
 */
int smallestNumber(const int *a, const int a_size) {
    int toReturn = a[0];
    for (int i = 0; i < a_size; i++) {
        if (a[i] < toReturn) toReturn = a[i];
    }
    return toReturn;
}

/*  Given Arrays A and B, this will swap the elements from every other index until we hit the end of the smallest array. This will Jumble Both arrays.
 *      const int *a -> Array a 
 *      const int a_size -> Size of Array a
 *      const int *b -> Array b
 *      const int b_size -> Size of Array b
 */
void jumbleArrays(const int *a, const int a_size, const int *b, const int b_size) {
    int temp = 0;
    for (int i = 0; i < a_size && i < b_size; i++) {
        if (i % 2 == 1) {
            temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }
}
