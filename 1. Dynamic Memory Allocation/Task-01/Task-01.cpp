#include "DynArr.h"
#include <iostream>

using namespace std;

void Array(int n)
{
    int *data;

    data = new int[n];

    for(int i=0;i<n;i++)
    {
        cout << "Enter Array[" << i << "]: ";
        cin >> data[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << "Array[" << i << "]: " << data[i] << endl;
    }

    delete [] data;
    data = NULL;
}
