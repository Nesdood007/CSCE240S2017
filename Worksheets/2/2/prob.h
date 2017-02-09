/*  Example Header file
        Be careful not to include things multiple times!!
*/

#ifndef _PROB_H
#define _PROB_H

#include <iostream> //Including a System Library
using namespace std;

//Get the sum of each row of the array and return an array of the sums
int* sumArray(const int * , const int , const int *, const int );
int arraySum(const int *, const int);

//Write these functions
int largestNumber(const int *, const int);
int smallestNumber(const int *, const int);
//Swaps every other element in the array until it hits the end
void jumbleArrays(int *, const int, int *, const int);

#endif
