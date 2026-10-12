#include <iostream>
#include "Template2D.h"

using namespace std;

template <class T>
Dyn2DArr<T> :: Dyn2DArr()
{
    matrix = NULL;
    size1 = 0;
    size2 = 0;
}

template <class T>
Dyn2DArr<T> :: Dyn2DArr(int index1,int index2)
{
    matrix = new T*[index1];

    for(int i=0;i<index1;i++)
    {
        matrix[i] = new T[index2];
    }

    size1 = index1;
    size2 = index2;
}

template <class T>
Dyn2DArr<T> :: ~Dyn2DArr()
{

    for(int i=0;i<size1;i++)
    {
        delete [] matrix[i];
    }

    delete [] matrix;
}

template <class T>
void Dyn2DArr<T> :: setValue(int index1,int index2,T value)
{
    matrix[index1][index2] = value;
}

template <class T>
T Dyn2DArr<T> :: getValue(int index1,int index2)
{
    return matrix[index1][index2];
}

template class Dyn2DArr<int>;
template class Dyn2DArr<double>;


