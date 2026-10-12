#include <iostream>
#include "Array2DClass.h"

using namespace std;

Dyn2DArr :: Dyn2DArr()
{
    matrix = NULL;
    size1 = 0;
    size2 = 0;
}

Dyn2DArr :: Dyn2DArr(int index1,int index2)
{
    matrix = new int*[index1];

    for(int i=0;i<index1;i++)
    {
        matrix[i] = new int[index2];
    }

    size1 = index1;
    size2 = index2;
}

Dyn2DArr :: ~Dyn2DArr()
{

    for(int i=0;i<size1;i++)
    {
        delete [] matrix[i];
    }

    delete [] matrix;
}

void Dyn2DArr :: setValue(int index1,int index2,int value)
{
    matrix[index1][index2] = value;
}

int Dyn2DArr::getValue(int index1,int index2)
{
    return matrix[index1][index2];
}
