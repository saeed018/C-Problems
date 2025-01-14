#include <iostream>
#include"unsortedtype.h"
#include"studentInfo.h"
#include <string>


using namespace std;

int main()
{
    UnsortedType<int> intList;
    intList.InsertItem(5);
    intList.InsertItem(7);
    intList.InsertItem(6);
    intList.InsertItem(9);
    cout<< "List is:"<<endl;
    int item;
    intList.ResetList();

    for(int i=0; i<intList.LengthIs(); i++)
    {
        intList.GetNextItem(item);
        cout<<item<<" "<<endl;
    }
    cout<<"Length is: "<<endl;
    cout<<intList.LengthIs()<<" "<<endl;
    cout<<"Insert one more item: "<<endl;
    intList.InsertItem(1);
    intList.ResetList();
    for(int i=0; i<intList.LengthIs(); i++)
    {
        intList.GetNextItem(item);
        cout<<item<<" ";
    }
    cout<<"Retrive item: "<<endl;
    item = 9;
    bool found;
    intList.RetrieveItem(item, found);
    cout<<"Item= "<<item <<" "<<"Found = "<<found<<endl;
    cout<<"isFull= "<<intList.IsFull()<<endl;
    intList.DeleteItem(5);
    cout<<"isFull= "<<intList.IsFull()<<endl;
    intList.DeleteItem(1);
    intList.ResetList();
    for(int i=0; i<intList.LengthIs(); i++)
    {
        intList.GetNextItem(item);
        cout<<item<<" "<<endl;
    }


     // Create a list of studentInfo objects
    UnsortedType<studentInfo> studentList;

    // Insert 5 student records
    studentList.InsertItem(studentInfo(15234, "Jon", 2.6));
    studentList.InsertItem(studentInfo(13732, "Tyrion", 3.9));
    studentList.InsertItem(studentInfo(13569, "Sandor", 1.2));
    studentList.InsertItem(studentInfo(15467, "Ramsey", 3.1));
    studentList.InsertItem(studentInfo(16285, "Arya", 3.1));

    // Print the list
    cout << "\nStudent List:" << endl;
    studentInfo temp;
    studentList.ResetList();
    for (int i = 0; i < studentList.LengthIs(); i++) {
        studentList.GetNextItem(temp);
        temp.Print();
    }

    // Delete the record with ID 15467
    studentInfo toDelete(15467, "", 0.0);
    studentList.DeleteItem(toDelete);
    cout << "\nList after deleting ID 15467:" << endl;
    studentList.ResetList();
    for (int i = 0; i < studentList.LengthIs(); i++) {
        studentList.GetNextItem(temp);
        temp.Print();
    }

    // Retrieve the record with ID 13569
    studentInfo toRetrieve(13569, "", 0.0);
   // bool found;
    studentList.RetrieveItem(toRetrieve, found);
    if (found) {
        cout << "\nRecord Found: ";
        toRetrieve.Print();
    } else {
        cout << "\nRecord with ID 13569 not found!" << endl;
    }

    // Print the final list
    cout << "\nFinal Student List:" << endl;
    studentList.ResetList();
    for (int i = 0; i < studentList.LengthIs(); i++) {
        studentList.GetNextItem(temp);
        temp.Print();
    }


    return 0;
}

