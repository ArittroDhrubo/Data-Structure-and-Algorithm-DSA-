#include<iostream>
#include "ArrayClass.h"

using namespace std;

DynArr :: DynArr()
{
    data = NULL;
    size1 = 0;
}

DynArr :: DynArr(int num)
{
    data = new int[num];
    size1 = num;
}

DynArr :: ~DynArr()
{
    delete [] data;
}

void DynArr :: setValue(int index,int Value)
{
    data[index] = Value;
}

int DynArr :: getValue(int index)
{
    return data[index];
}
