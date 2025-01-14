#include <iostream>
//#include <string>
#include "stacktype.h"
using namespace std;

int main()
{
    StackType <int> stackList;
    bool s=stackList.IsEmpty();
    if(s==1)
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;
    cout<<"push item:"<<endl;
    stackList.Push(5);
    stackList.Push(7);
    stackList.Push(4);
    stackList.Push(2);
      s=stackList.IsEmpty();
    if(s==1)
        cout<<"stack is empty"<<endl;
    else
        cout<<""<<"stack is not empty"<<endl;

    if(stackList.IsFull())
        cout<<"stack is full"<<endl;
    else
        cout<<"stack is not full"<<endl;

    cout<<"print the stack:"<<endl;
    StackType <int> tempStack;
      while(!stackList.IsEmpty())
      {
          tempStack.Push(stackList.Top());
          stackList.Pop();
      }
      while(!tempStack.IsEmpty())
      {
          cout<<tempStack.Top()<<" ";
          stackList.Push(tempStack.Top());
          tempStack.Pop();
      }
      stackList.Push(3);
      cout<<endl;
       while(!stackList.IsEmpty())
      {
          tempStack.Push(stackList.Top());
          stackList.Pop();
      }
      while(!tempStack.IsEmpty())
      {
          cout<<tempStack.Top()<<" ";
          stackList.Push(tempStack.Top());
          tempStack.Pop();
      }
      stackList.Pop();
      stackList.Pop();
      cout<<endl;
        while(!stackList.IsEmpty())
      {
          tempStack.Push(stackList.Top());
          stackList.Pop();
      }
      while(!tempStack.IsEmpty())
      {
          cout<<tempStack.Top()<<" ";
          stackList.Push(tempStack.Top());
          tempStack.Pop();
      }
       cout<<endl;
      cout<<"print the top:"<<endl;
      cout<<stackList.Top()<<endl;

      string expression;
    cout << "Enter a string of parentheses to check if balanced: ";
    cin >> expression;

    if (IsBalanced(expression))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;





    return 0;
}
