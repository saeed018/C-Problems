#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include <iostream>
using namespace std;
class FullQueue {};
class EmptyQueue {};
template<class ItemType>
class QueType
{
public:
    QueType();
    QueType(int max);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
private:
    int front;
    int rear;
    ItemType* items;
    int maxQue;
};

template<class ItemType>
QueType<ItemType>::QueType(int max)
{
    maxQue = max + 1;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
    //cout<<" C call"<<endl;
}

template<class ItemType>
QueType<ItemType>::QueType()
{
    maxQue = 501;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
    //cout<<"default C call"<<endl;
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    delete [] items;
}

template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    front = maxQue - 1;
    rear = maxQue - 1;
}

template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (rear == front);
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    return ((rear + 1) % maxQue == front);
}

template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if (IsFull())
        throw FullQueue();
    else
    {
        rear = (rear + 1) % maxQue;
        items[rear] = newItem;
    }
}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if (IsEmpty())
        throw EmptyQueue();
    else
    {
        front = (front + 1) % maxQue;
        item = items[front];
    }
}
void GenerateBinaryNumbers(int n) {
    QueType<string> q(500); // Initialize a queue for binary numbers

    q.Enqueue("1"); // Enqueue the first binary number "1"

    for (int i = 1; i <= n; i++) {
        string current;
        q.Dequeue(current); // Dequeue the front element
        cout << current << " "; // Print the dequeued binary number

        // Append "0" and "1" and enqueue them
        q.Enqueue(current + "0");
        q.Enqueue(current + "1");
    }
    cout << endl;
}



#endif // QUETYPE_H_INCLUDED
