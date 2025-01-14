#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
    data = NULL;
    //size = 0;
}
dynArr::dynArr(int r,int c)
{
    rows=r;
    col=c;

    data = new int* [rows];
    //size = s;
    for(int i=0;i<rows;i++)
    {
        data[i]=new int[col];
    }
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int r, int c)
{
    return data[r][c];
}
void dynArr::setValue(int r,int c, int value)
{
    data[r][c] = value;
}
//void dynArr::allocate(int s)
//{
//    if(data != NULL)
//        delete[] data;
//
//    data = new int[s];
//    //size = s;
//}
