#include <iostream>
#include"sortedtype.h"
#include"time.h"

using namespace std;

int main()
{
    SortedType <int> itemList;
    itemList.InsertItem(5);
    itemList.InsertItem(7);
    itemList.InsertItem(4);
    itemList.InsertItem(2);
    itemList.InsertItem(1);
    cout<<"print the list:"<<endl;
    itemList.ResetList();
    int item;
    for(int i=0; i<itemList.LengthIs(); i++)
    {
        itemList.GetNextItem(item);
        cout<<item<<" ";
    }
    cout<<endl;
    cout<<"retrive 6:"<<endl;
    bool found;
    itemList.RetrieveItem(item=6,found);
    cout<<endl;
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;

    cout<<"retrive 100:"<<endl;

    itemList.RetrieveItem(item=100,found);
    cout<<endl;
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;

    if(itemList.IsFull())
            cout<<"Length is full"<<endl;
    else
        cout<<"Lenght is not full"<<endl;
    cout<<"delete 1"<<endl;
    itemList.DeleteItem(1);
    itemList.ResetList();
     for(int i=0; i<itemList.LengthIs(); i++)
    {
        itemList.GetNextItem(item);
        cout<<item<<" ";
    }
    cout<<endl;
    cout<<"List is full or not?"<<endl;
      if(itemList.IsFull())
        cout<<"Length is full"<<endl;
    else
        cout<<"List is not full"<<endl;


     // Create a SortedType list for timeStamp objects
    SortedType<timeStamp> timeList;

    // Insert 5 timeStamp objects into the list
    timeList.InsertItem(timeStamp(15, 34, 23));
    timeList.InsertItem(timeStamp(13, 13, 02));
    timeList.InsertItem(timeStamp(43, 45, 12));
    timeList.InsertItem(timeStamp(25, 36, 17));
    timeList.InsertItem(timeStamp(52, 02, 20));

    cout << "Initial List:" << endl;
    timeList.ResetList();
    timeStamp temp;

    // Print all time stamps
    for (int i = 0; i < timeList.LengthIs(); i++) {
        timeList.GetNextItem(temp);
        temp.print();
    }

    // Delete the timestamp (25, 36, 17)
    timeStamp toDelete(25, 36, 17);
    timeList.DeleteItem(toDelete);

    cout << "\nList after deleting 25:36:17:" << endl;
    timeList.ResetList();

    // Print all time stamps after deletion
    for (int i = 0; i < timeList.LengthIs(); i++) {
        timeList.GetNextItem(temp);
        temp.print();
    }

    // Retrieve a specific timestamp (15, 34, 23) and check if it's found
    timeStamp toRetrieve(15, 34, 23);
   // bool found;
    timeList.RetrieveItem(toRetrieve, found);

    if (found) {
        cout << "\nRecord Found: ";
        toRetrieve.print();
    } else {
        cout << "\nRecord not found!" << endl;
    }



    return 0;
}
