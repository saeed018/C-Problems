#include <iostream>
#include "dynarr.h"

using namespace std;

int main() {
    // Step 1: Create two objects of the class
//    dynArr obj1;        // Object with no constructor argument
//    dynArr obj2(5);     // Object with constructor argument 5 (array size = 5)
//
//    // Step 2: Take 5 input values from the user for the second object
//    cout << "Enter 5 values for the second object:\n";
//    for (int i = 0; i < 5; i++) {
//        int value;
//        cin >> value;
//        obj2.setValue(i, value); // Store the value in the array of obj2
//    }
//
//    // Step 3: Print all the values stored in the second object
//    cout << "Values stored in the second object are:\n";
//    for (int i = 0; i < 5; i++) {
//        cout << obj2.getValue(i) << " "; // Retrieve and print the values
//    }
//    cout << endl;

//    dynArr obj;
//    obj.allocate(5);
//
//
//    cout<<" Allocating array:\n";
//    for(int i=0;i<5;i++)
//    {
//        int value;
//        cin >> value;
//        obj.setValue(i,value);
//
//    }
//    cout<<"Printing the Array \n";
//    for(int i=0;i<5;i++)
//    {
//        cout<<obj.getValue(i)<<" ";
//    }
//        cout << endl;
//
//    // Reallocate to a new size
//    cout << "Reallocating array to size 3...\n";
//
//    obj.allocate(3);
//
//    // Set new values for the resized array
//    cout << "Enter 3 values:\n";
//    for (int i = 0; i < 3; i++) {
//        int value;
//        cin >> value;
//        obj.setValue(i, value);
//    }
//
//    // Print the new values
//    cout << "Values in the resized array are:\n";
//    for (int i = 0; i < 3; i++) {
//        cout << obj.getValue(i) << " ";
//    }
//    cout << endl;


    // No operations on obj1 since its size is 0
    //cout << "No operations can be performed on the first object since its array size is 0.\n";
    int row,col;
    cout<<"Enter the row number:\n";
    cin>>row;
    cout<<"Enter the column number: \n";
    cin>>col;
    dynArr obj(row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            int val;
            cin>> val;
            obj.setValue(i,j,val);

        }
    }
    cout<<" output array is:\n";

   for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

         cout<<obj.getValue(i,j)<<" ";

        }
        cout<<"\n";
    }


    return 0;
}
