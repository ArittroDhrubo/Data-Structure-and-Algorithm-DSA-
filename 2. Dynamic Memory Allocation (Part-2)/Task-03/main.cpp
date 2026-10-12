#include <iostream>
#include "Int2DDynArr.h"
#include <conio.h>

using namespace std;

int main(void)
{
    int row,col;

    cout << "Enter row: ";
    cin >> row;

    cout << "Enter col: ";
    cin >> col;

    ArrayInt2D(row,col);

    getch();

    return 0;
}
