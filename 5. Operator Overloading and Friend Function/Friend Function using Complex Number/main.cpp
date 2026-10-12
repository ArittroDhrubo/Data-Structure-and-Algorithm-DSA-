#include <iostream>
#include <conio.h>
#include "Friend.h"

using namespace std;

int main(void)
{
    Complex A(1,1),B(3,4);
    Complex C;
    C = Addition(A,B);
    C.print();
    C = Multiplication(A,B);
    C.print();

    getch();
    return 0;
}
