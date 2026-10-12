#include "Int2DDynArr.h"
#include <iostream>

using namespace std;

void ArrayInt2D(int row,int col)
{
    int sum = 0,maxn,minn;
    double avg;
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

        sum += matrix[i][j];
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

    maxn = INT_MIN;
    minn = INT_MAX;

    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
    {
        if(maxn < matrix[i][j])
        {
            maxn = matrix[i][j];
        }

        if(minn > matrix[i][j])
        {
            minn = matrix[i][j];
        }
    }
    }

    for(int i=0;i<row;i++)
    {
        delete [] matrix[i];
    }

    delete [] matrix;

    matrix = NULL;

    cout << "Sum: " << sum << endl;

    avg = (double)sum/(row*col);

    cout << "Average: " << avg << endl;

    cout << "Maximum Number: " << maxn << endl;
    cout << "Minimum Number: " << minn << endl;
}
