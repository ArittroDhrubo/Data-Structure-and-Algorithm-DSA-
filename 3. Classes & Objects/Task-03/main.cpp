#include <iostream>
#include "Array2DClass.h"
using namespace std;

int main(void)
{
    int row,col,value;

    cout << "Enter row: ";
    cin >> row;

    cout << "Enter col: ";
    cin >> col;

    Dyn2DArr obj1,obj2(row,col);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << "Enter Array[" << i << "][" << j << "]: ";
            cin >> value;

            obj2.setValue(i,j,value);
        }
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
