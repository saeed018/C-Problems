#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include <string>

const int MAX_ITEMS = 5;
class FullStack
// Exception class thrown
// by Push when stack is full.
{};
class EmptyStack
// Exception class thrown
// by Pop and Top when stack is emtpy.
{};
template<class ItemType>
class StackType
{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsBalanced(ItemType);
private:
    int top;
    ItemType items[MAX_ITEMS];
};

template <class ItemType>
StackType<ItemType>::StackType()
{
    top = -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top == MAX_ITEMS-1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if( IsFull() )
        throw FullStack();
    top++;
    items[top] = newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() )
        throw EmptyStack();
    top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    return items[top];
}
bool IsBalanced(const std::string& expression)
 {
    StackType<char> stack; // Stack to track parentheses
    for (int i = 0; i < expression.length(); i++) { // Loop through each character
        char ch = expression[i];
        if (ch == '(') {
            stack.Push(ch); // Push if it's an opening parenthesis
        } else if (ch == ')') {
            if (stack.IsEmpty()) { // Check for mismatch
                return false;
            }
            stack.Pop(); // Pop matching parenthesis
        }
    }
    return stack.IsEmpty(); // Stack should be empty if balanced
}

#endif // STACKTYPE_H_INCLUDED
