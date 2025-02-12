/*
    COMP 345 - Assignment 1
    Authors: 
    - Arina Sabzevari (40205861)
    - Parsa Ghadimi (40203370)
    - Zineb Alaoui Aziz (40215844)
*/

#include <iostream>

using namespace std;

//Create a Dynamic Array:
int* createArray(int size) {
    cout << "Making an array of size " << size << "..." << endl;
    return new int[size];
}

// Initialize the Array:
void initializeArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    cout << "Array is now filled with numbers." << endl;
}

// Print the Array:
void printArray(int* arr, int size) {
    cout << "Array content: [ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

//Delete the Array:
void deleteArray(int* arr) {
    cout << "Removing the array..." << endl;
    delete[] arr;
    cout << "Memory cleared." << endl;
}
//Main Function:
int main() {
    int size;

    cout << "== Assignment 1 : Part 1 ==" << endl;
    cout << "Enter size: ";
    cin >> size;

    if (size <= 0) {
        cout << "Size must be greater than zero." << endl;
        return 1;
    }

    int* arr = createArray(size);
    cout << "Array created." << endl;

    initializeArray(arr, size);
    printArray(arr, size);

    deleteArray(arr);
    cout << "Done." << endl;

    return 0;
}
