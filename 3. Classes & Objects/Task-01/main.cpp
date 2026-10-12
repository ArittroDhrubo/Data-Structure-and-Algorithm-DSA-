#include <iostream>
#include "ArrayClass.h"
#include <conio.h>

using namespace std;

int main(void)
{
    DynArr obj1,obj2(5);
    int value;

    for(int i=0;i<5;i++)
    {
        cout << "Enter Array[" << i << "]: ";
        cin >> value;

        obj2.setValue(i,value);
    }

    for(int i=0;i<5;i++)
    {
        cout <<  obj2.getValue(i) << " ";
    }
    return 0;
}
