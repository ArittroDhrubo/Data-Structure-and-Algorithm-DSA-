#include<iostream>
#include "Template.h"

using namespace std;

template <typename T>
DynArr<T> :: DynArr()
{
    data = NULL;
    size1 = 0;
}

template <typename T>
DynArr<T> :: DynArr(int num)
{
    data = new T[num];
    size1 = num;
}

template <typename T>
DynArr<T> :: ~DynArr()
{
    delete [] data;
}
template <typename T>
void DynArr<T> :: setValue(int index,T Value)
{
    data[index] = Value;
}
template <typename T>
T DynArr<T> :: getValue(int index)
{
    return data[index];
}

template class DynArr<int>;
template class DynArr<double>;

