#include <iostream>
#include <conio.h>
#include "Complex.h"

using namespace std;

int main(void)
{
    Complex A(1,1),B(3,4);
    Complex C;
    C = A.Addition(B);
    C.print();
    C = A.Multiplication(B);
    C.print();

    getch();
    return 0;
}
