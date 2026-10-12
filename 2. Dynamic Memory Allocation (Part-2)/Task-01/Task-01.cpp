#include <iostream>
#include "DDynnArr.h"

using namespace std;

void Array2D(int row,int col)
{
    char **CharMatrix;

    CharMatrix = new char*[row];

    for(int i=0;i<row;i++)
    {
        CharMatrix[i] = new char[col];
    }

    for(int i=0;i<row;i++)
    {
         for(int j=0;j<col;j++)
         {
         cout << "Char Matrix[" << i << "][" << j << "]: ";
         cin >> CharMatrix[i][j];
         }
    }

    for(int i=0;i<row;i++)
    {
         for(int j=0;j<col;j++)
         {
         cout << CharMatrix[i][j] << " ";
         }
         cout << endl;
    }
    for(int i=0;i<row;i++)
    {
         delete [] CharMatrix[i];
    }
    delete [] CharMatrix;

    CharMatrix = NULL;
}
