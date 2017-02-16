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
    if (listLength == arrayLength) {
        resizeArray()
    }
    
    listLength++;
    array[listLength] = item;
}

//Inserts item after a given index
void ArrayList::insert(int index, int item) {
    checkBounds(index);
    array[index] = item;
}

//Removes the item at a given index
void ArrayList::remove(int index) {
    checkBounds(index);
    for (int i = index; i < listLength; i++) {
        array[i] = array[i + 1];
    }
    listLength--;
}

//Retrieve the item at a given index
int ArrayList::get(int index) {
    checkBounds(index);
    return array[index];
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
    if (amount > 0) {
        for(int i = startIndex; i < arrayLength && i >= 0 && i + amount < arrayLength && i + amount >= 0; i++) {
            array[i + amount] = array[i];
        }
    } else if (amount < 0) {
        for(int i = arrayLength - 1; i < arrayLength && i >= 0 && i + amount < arrayLength && i + amount >= 0; i--) {
            array[i + amount] = array[i];
        }
    }
}

//Checks the size of the List versus the size of the array
void ArrayList::checkSize() {
    if (arrayLength == listSize) {
        resizeArray(2 * listSize);
    } else if(listLength <= arrayLength / 2) {
        resizeArray(listSize / 2);
    }
}

//Debug Function that prints the entire List and internal Array Contents
void ArrayList::printList() {
    cout << "List: ";
    for (int i = 0; i < listLength; i++) {
        cout << array[i] + " ";
    }
    cout << endl << "Internal Array: ";
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] + " ";
    }
    cout << endl;
}
