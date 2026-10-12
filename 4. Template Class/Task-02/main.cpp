#include <iostream>
#include "Template2D.h"
using namespace std;

int main(void)
{
    int row,col,value;
    double value1;

    cout << "Enter row: ";
    cin >> row;

    cout << "Enter col: ";
    cin >> col;

    Dyn2DArr<int> obj1(row,col);
    Dyn2DArr<double> obj2(row,col);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << "Enter Array[" << i << "][" << j << "]: ";
            cin >> value;

            obj1.setValue(i,j,value);
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << "Enter Array[" << i << "][" << j << "]: ";
            cin >> value1;

            obj2.setValue(i,j,value1);
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << obj1.getValue(i,j) << " ";
        }
        cout << endl;
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << obj2.getValue(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}
