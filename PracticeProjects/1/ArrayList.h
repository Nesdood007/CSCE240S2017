#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>

using namespace std;

class ArrayList {
    int listSize = 0;//List Size
    int arraySize = 0;//Internal Array
    int * array;

    public:
        Course(int size);
        ~Course();
        
        void append(int );
        void insert(int, int);
        void remove(int );
        int get(int);
};
#endif
