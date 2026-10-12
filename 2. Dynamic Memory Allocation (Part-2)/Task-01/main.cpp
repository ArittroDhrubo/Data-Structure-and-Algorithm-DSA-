#include <iostream>
#include "DDynnArr.h"
#include <conio.h>
using namespace std;

int main(void)
{
   int row,col;

   cout << "Enter row: ";
   cin >> row;

   cout << "Enter column: ";
   cin >> col;

   Array2D(row,col);

   getch();
   return 0;
}
