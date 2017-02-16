#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>

using namespace std;

class ArrayList {
    int listLength;//List Size
    int arrayLength;//Internal Array
    int * array;

    public:
        ArrayList(int size);
        ~ArrayList();
        
        void append(int);
        void insert(int, int);
        void remove(int);
        int get(int);
    private:
        void checkIndex(int);
        void shiftArray(int, int);
        void resizeArray(int);
};
#endif
