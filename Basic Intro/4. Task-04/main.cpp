#include <iostream>
#include "Arithmatic Perform.h"
#include <conio.h>

using namespace std;

int main(void)
{
    double a,b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Sum: " << Addition(a,b) << endl;
    cout << "Subtract: " << Subtraction(a,b) << endl;
    cout << "Multiplication: " << Multiplication(a,b) << endl;
    cout << "Division: " << Division(a,b) << endl;

    getch();

    return 0;
}
