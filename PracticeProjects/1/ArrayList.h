#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>

using namespace std;

class ArrayList {
    int listLength = 0;//List Size
    int arrayLength = 0;//Internal Array
    int * array;

    public:
        ArrayList(int size);
        ~ArrayList();
        
        void append(int);
        void insert(int, int);
        void remove(int);
        int get(int);
};
#endif
