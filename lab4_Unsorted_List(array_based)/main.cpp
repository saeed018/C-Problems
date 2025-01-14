#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex com1(2,4),com2(3,1);
    Complex com3 = com1+com2;
    com3.Print();


    return 0;
}
