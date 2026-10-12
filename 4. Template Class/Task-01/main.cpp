#include <iostream>
#include "Template.h"
#include <conio.h>

using namespace std;

int main(void)
{
    int row,value;
    double value1;

    cout << "Enter row: ";
    cin >> row;

    DynArr<int> obj1(row);
    DynArr<double> obj2(row);

    for(int i=0;i<row;i++)
    {
        cout << "Enter Arrayint[" << i << "]: ";
        cin >> value;

        obj1.setValue(i,value);
    }

    for(int i=0;i<row;i++)
    {
        cout << "Enter Arraydoub[" << i << "]: ";
        cin >> value1;

        obj2.setValue(i,value1);
    }

    for(int i=0;i<row;i++)
    {
        cout <<  obj1.getValue(i) << " ";
    }

    cout << endl;

    for(int i=0;i<row;i++)
    {
        cout <<  obj2.getValue(i) << " ";
    }
    return 0;
}
