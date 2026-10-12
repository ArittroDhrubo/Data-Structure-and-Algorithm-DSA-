#include "Int2DArr.h"
#include <iostream>

using namespace std;

void ArrayInt2D(int row,int col)
{
    int **matrix = NULL;

    matrix = new int*[row];

    for(int i=0;i<row;i++)
    {
        matrix[i] = new int[col];
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << "Enter Matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
          cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0;i<row;i++)
    {
        delete [] matrix[i];
    }

    delete [] matrix;
    matrix = NULL;
}
