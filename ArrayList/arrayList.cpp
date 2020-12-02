#include <iostream>
#include "arrayList.h"

using namespace std;

ArrayList::ArrayList() {
    end = -1;
    size = 0;
    array = new int[size];
}

ArrayList::~ArrayList() {
    delete[] array;
    array = NULL;
}

void ArrayList::append(int item) {
    end += 1; 
    if (end >= size) {
        reallocate();
    }
    array[end] = item;
}

void ArrayList::remove(int index) {
    if (size == 0) {
        cerr << "can't remove item: no items in list." << endl;
        exit(1);
    }
    if (index > end || index < 0) {
        cerr << "can't remove item: invalid index" << endl;
        exit(1);
    }
    while (index<end) {
        array[index] = array[index+1];
        index += 1;
    }
    end = end-1;
}

void ArrayList::insert(int index, int item) {
    end += 1;
    if (index > end) {
        cerr << "can't insert item: invalid index" << endl;
        exit(1);
    }

    if (end >= size) {
        reallocate();
    }
    int j = end;
    while (j >= index) {
        array[j] = array[j-1];
        j--;
    }
    array[index] = item;
}

/*
this function is called when there needs to be more memory allocated for a new element 
to be added to the array list.
*/
void ArrayList::reallocate() {
    //max size of list increases. size referes to number of elements and not number of bytes.
    size += 1;
    //allocate space to contain new array
    int* tmpArray = new int[size];
    //move elements of current array to newly allocated space
    for (int i=0; i<size-1; i++) {
        tmpArray[i] = array[i];
    }
    //free up space and point to the new array
    delete[] array;
    array = tmpArray;
}

void ArrayList::printArray() {
    cout << "[";
    if (end == -1) {
        cout << "]" << endl;
    }
    for (int i=0; i<=end; i++) {
        if (i != end) {
            cout << array[i] << ", ";
        } else {
            cout << array[i] << "]" << endl;
        }
    }

}
