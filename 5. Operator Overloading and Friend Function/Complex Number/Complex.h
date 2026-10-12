#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
public:
    Complex();
    Complex(double,double);
    Complex Addition(Complex);
    Complex Multiplication(Complex);
    //bool Verifier(Complex);
    void print();
private:
    double real, imaginary;
};

#endif // COMPLEX_H_INCLUDED
