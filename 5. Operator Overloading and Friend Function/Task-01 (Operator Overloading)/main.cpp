#include <iostream>
#include <conio.h>
#include "OperatorOvL.h"

using namespace std;

int main(void)
{
    Complex A(1,1),B(3,4);
    Complex C,D;
    C = A + B;
    C.print();
    C = A * B;
    D.print();

    if(C != D)
    {
        cout << "Not Equal." << endl;
    }
    else{
        cout << "Equal." << endl;
    }

    getch();
    return 0;
}

