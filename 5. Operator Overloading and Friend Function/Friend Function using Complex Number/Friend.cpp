#include "Friend.h"
#include <iostream>

using namespace std;

Complex :: Complex()
{
    real = 0;
    imaginary = 0;
}

Complex :: Complex(double r, double i)
{
    real = r;
    imaginary = i;
}

Complex Addition(Complex a,Complex b)
{
    Complex t;
    t.real = a.real + b.real;
    t.imaginary = a.real + b.imaginary;
    return t;
}

Complex Multiplication(Complex a,Complex b)
{
    Complex t;
    t.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    t.imaginary = (a.real * b.imaginary) + (a.imaginary * b.real);
    return t;
}

void Complex :: print()
{
    cout << "Real: " << real << endl;
    cout << "Imaginary: " << imaginary << endl;
    cout << "The Complex number is: " << real << "." << imaginary << "i" << endl;
}
