#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

#include <iostream>
using namespace std;

// Template declaration
template <typename T>
class dynArr {
private:
    T* data;  // Pointer to dynamically allocated memory
    int size; // Size of the array

public:
    // Constructor to allocate memory
    dynArr(int s) {
        size = s;
        data = new T[size]; // Allocate memory for `size` elements of type T
    }

    // Destructor to deallocate memory
    ~dynArr() {
        delete[] data; // Deallocate the dynamically allocated memory
    }

    // Set value at a specific index
    void setValue(int index, T value) {
        if (index >= 0 && index < size) {
            data[index] = value; // Assign the value at the given index
        } else {
            cout << "Index out of bounds!" << endl;
        }
    }

    // Get value at a specific index
    T getValue(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        } else {
            cout << "Index out of bounds!" << endl;
            return T(); // Return default value for T
        }
    }
};

#endif // DYNARR_H_INCLUDED
