#include <iostream>
#include <string>
#include "StackType.h"

using namespace std;

int main()
{
    StackType<char> stack;
    string expression;

    cout << "Enter an infix expression: ";
    getline(cin, expression);

    try
    {
        // Convert the infix expression to postfix
        string postfix = stack.InfixToPostfix(expression);

        // Evaluate the postfix expression
        StackType<float> evalStack;
        float result = evalStack.EvaluatePostfix(postfix);

        // Output the result
        cout << "The result is: " << result << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }
    catch (...)
    {
        cout << "Invalid expression" << endl;
    }

    return 0;
}
