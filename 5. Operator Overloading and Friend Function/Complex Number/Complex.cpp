#include "Complex.h"
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

Complex Complex :: Addition(Complex a)
{
    Complex t;
    t.real = real + a.real;
    t.imaginary = real + a.imaginary;
    return t;
}

Complex Complex :: Multiplication(Complex a)
{
    Complex t;
    t.real = (real * a.real) - (imaginary * a.imaginary);
    t.imaginary = (real * a.imaginary) + (imaginary * a.real);
    return t;
}

/*bool Complex :: Verifier(Complex a)
{
    if((real!=a.real) && (imaginary!=a.imaginary))
    {
        return true;
    }
    else{
        return false;
    }
}*/

void Complex :: print()
{
    cout << "Real: " << real << endl;
    cout << "Imaginary: " << imaginary << endl;
    cout << "The Complex number is: " << real << "." << imaginary << "i" << endl;
}
