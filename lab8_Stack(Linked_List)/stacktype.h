#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include <new>       // For bad_alloc
#include <string>
#include <cctype>
#include <stdexcept>

using namespace std;

class FullStack
{};
class EmptyStack
{};
template <class ItemType>
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
    int Precedence(char op);
    bool IsOperator(char ch);
    string InfixToPostfix(const string& infix);
    float EvaluatePostfix(const string& postfix);
private:
    NodeType* topPtr;
};

template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (bad_alloc&)
    {
        return true;
    }
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if (IsFull())
        throw FullStack();
    else
    {
        NodeType* location;
        location = new NodeType;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    }
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    if (IsEmpty())
        throw EmptyStack();
    else
    {
        NodeType* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
int StackType<ItemType>::Precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

template <class ItemType>
bool StackType<ItemType>::IsOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

template <class ItemType>
string StackType<ItemType>::InfixToPostfix(const string& infix)
{
    string postfix;
    StackType<char> stack;

    for (char ch : infix)
    {
        if (isdigit(ch))
        {
            postfix += ch; // Append operands directly to postfix expression
        }
        else if (ch == '(')
        {
            stack.Push(ch);
        }
        else if (ch == ')')
        {
            while (!stack.IsEmpty() && stack.Top() != '(')
            {
                postfix += stack.Top();
                stack.Pop();
            }
            if (!stack.IsEmpty() && stack.Top() == '(')
            {
                stack.Pop();
            }
        }
        else if (IsOperator(ch))
        {
            while (!stack.IsEmpty() && Precedence(stack.Top()) >= Precedence(ch))
            {
                postfix += stack.Top();
                stack.Pop();
            }
            stack.Push(ch);
        }
    }

    while (!stack.IsEmpty())
    {
        postfix += stack.Top();
        stack.Pop();
    }

    return postfix;
}

template <class ItemType>
float StackType<ItemType>::EvaluatePostfix(const string& postfix)
{
    StackType<float> stack;

    for (char ch : postfix)
    {
        if (isdigit(ch))
        {
            stack.Push(ch - '0'); // Convert char to int and push
        }
        else if (IsOperator(ch))
        {
            float val2 = stack.Top();
            stack.Pop();
            float val1 = stack.Top();
            stack.Pop();

            switch (ch)
            {
                case '+': stack.Push(val1 + val2); break;
                case '-': stack.Push(val1 - val2); break;
                case '*': stack.Push(val1 * val2); break;
                case '/':
                    if (val2 == 0) throw runtime_error("Division by zero");
                    stack.Push(val1 / val2);
                    break;
            }
        }
    }

    return stack.Top();
}

#endif // STACKTYPE_H_INCLUDED
