#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the array size:\n"<<endl;
    cin>> size;
    int *arr = new int[size];
    cout<<"Enter the "<<size<< " value:\n"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Printing the output value:\n" <<endl;
    for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<endl;
    }
    delete[] arr;
    return 0;
}
