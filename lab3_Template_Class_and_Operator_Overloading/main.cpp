#include <iostream>
#include "dynarr.h"

using namespace std;

int main() {
    // Create a dynamic array of integers
    dynArr<int> intArray(5);

    // Set values for the integer array
    cout << "Enter 5 integer values:\n";
    for (int i = 0; i < 5; i++) {
        int value;
        cin >> value;
        intArray.setValue(i, value);
    }

    // Print the integer array
    cout << "Integer array values:\n";
    for (int i = 0; i < 5; i++) {
        cout << intArray.getValue(i) << " ";
    }
    cout << endl;

    // Create a dynamic array of doubles
    dynArr<double> doubleArray(3);

    // Set values for the double array
    cout << "Enter 3 double values:\n";
    for (int i = 0; i < 3; i++) {
        double value;
        cin >> value;
        doubleArray.setValue(i, value);
    }

    // Print the double array
    cout << "Double array values:\n";
    for (int i = 0; i < 3; i++) {
        cout << doubleArray.getValue(i) << " ";
    }
    cout << endl;

    return 0;
}
