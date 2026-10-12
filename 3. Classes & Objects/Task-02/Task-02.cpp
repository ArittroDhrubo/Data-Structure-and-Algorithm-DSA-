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
    allocate(num);
}

DynArr :: ~DynArr()
{
    delete [] data;
}

void DynArr :: allocate(int num)
{
    if(data == NULL)
    {
        data = new int[num];
    }
    else{
        data == NULL;
    }
}

void DynArr :: setValue(int index,int Value)
{
    data[index] = Value;
}

int DynArr :: getValue(int index)
{
    return data[index];
}
