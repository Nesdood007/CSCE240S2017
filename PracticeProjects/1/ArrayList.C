#include "ArrayList.h"

ArrayList::ArrayList(int size) {
    arrayLength = size * 2;
    listLength = size;
    array = new int[arrayLength];
}

ArrayList::~ArrayList() {
    delete [] array;
}

//Appends item to the end of the List
void ArrayList::append(int item) {
    listLength++;
    array[listLength] = item;
}

//Inserts item after a given index
void ArrayList::insert(int index, int item) {
    if (index > 0 && index < listLength) {
        array[index] = item;
    } else {
        throw "Index Out of Bounds";
    }
}

//Removes the item at a given index
void ArrayList::remove(int index) {
    if (index > 0 && index < listLength) {
        for (int i = index; i < listLength; i++) {
            array[i] = array[i + 1];
        }
        listLength--;
     } else {
         throw "Index Out of Bounds";
     }
}

//Retrieve the item at a given index
int ArrayList::get(int index) {
    if (index > 0 && index < listLength) {
        return array[index];
    } else {
        throw "Index Out Of Bounds";
    }
}
