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

//Checks the Index to see if it is valid. Throws exception if it is not
void ArrayList::checkIndex(int i) {
    if (i < 0 || i >= arrayLength) {
        cerr << "Index " << i << " is Out Of Bounds" << endl;
        throw "Index Out Of Bounds";
    }
}
//Resizes the internal Array
void ArrayList::resizeArray(int newSize) {
    int * oldArray = &array;
    int * newArray = new int[newSize];
    for (int i = 0; i < newSize && i < arraySize; i++) {
        newArray[i] = oldArray[i];
    }
    delete [] oldArray;
    array = newArray;
    arrayLength = newSize;
}

//Shifts the Internal Array by the given amount
void ArrayList::shiftArray(int startIndex, int amount) {
    for(int i = startIndex; i < arrayLength && i >= 0 && i + amount < arrayLength && i + amount >= 0; i++) {
        array[i + amount] = array[i];
    }
}
