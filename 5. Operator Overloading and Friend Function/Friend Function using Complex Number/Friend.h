#ifndef FRIEND_H_INCLUDED
#define FRIEND_H_INCLUDED

class Complex{
public:
    Complex();
    Complex(double,double);
    friend Complex Addition(Complex,Complex);
    friend Complex Multiplication(Complex,Complex);
    void print();
private:
    double real, imaginary;
};

#endif // FRIEND_H_INCLUDED
