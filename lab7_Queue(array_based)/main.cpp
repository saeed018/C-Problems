#include <iostream>
#include"quetype.h"

using namespace std;

int main()
{
   QueType <int> queueList(5);
   if(queueList.IsEmpty())
    cout<<"queue is empty"<<endl;
   else
    cout<<"queue is not empty"<<endl;
    cout<<"Encueue 4 elements:"<<endl;
   queueList.Enqueue(5);
   queueList.Enqueue(7);
   queueList.Enqueue(4);
   queueList.Enqueue(2);
    if(queueList.IsEmpty())
    cout<<"queue is empty"<<endl;
   else
    cout<<"queue is not empty"<<endl;
    cout<<"queue is full or not:"<<endl;
    if(queueList.IsFull())
        cout<<"queue is full"<<endl;
    else
        cout<<"queue is not full"<<endl;
    cout<<"encueue another item:"<<endl;
     queueList.Enqueue(6);
     cout<<"print the queue: "<<endl;
     int item;
     for(int i=0;i<5;i++)
     {
         queueList.Dequeue(item);
         cout<<item<<" ";
         queueList.Enqueue(item);
     }
     cout<<endl;
      if(queueList.IsFull())
        cout<<"queue is full"<<endl;
    else
        cout<<"queue is not full"<<endl;

    cout<<"insert another item:8"<<endl;


    try{
    queueList.Enqueue(8);
    }
    catch(FullQueue){
        cout<<"exception queue is full:"<<endl;

    }
    queueList.Dequeue(item);
    queueList.Dequeue(item);
    for(int i=0;i<3;i++)
     {
         queueList.Dequeue(item);
         cout<<item<<" ";
         queueList.Enqueue(item);
     }
     queueList.Dequeue(item);
    queueList.Dequeue(item);
    queueList.Dequeue(item);
    cout<<"queue is empty or not:"<<endl;

    if(queueList.IsEmpty())
        cout<<"queue is empty"<<endl;
    else
        cout<<"queue is not empty"<<endl;

     try{
     queueList.Dequeue(item);
     }   catch(EmptyQueue)
     {
         cout<<"Exception Queue is already empty"<<endl;
     }

     cout<<"binary generating: "<<endl;
     int n;
     cout<<"enter the number 1 to: "<<endl;
     cin>>n;
     GenerateBinaryNumbers(n);


    return 0;
}
