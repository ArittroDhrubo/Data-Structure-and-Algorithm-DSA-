#ifndef OPERATOROVL_H_INCLUDED
#define OPERATOROVL_H_INCLUDED

class Complex{
public:
    Complex();
    Complex(double,double);
    Complex operator+(Complex);
    Complex operator*(Complex);
    bool operator!=(Complex);
    void print();
private:
    double real, imaginary;
};

#endif // OPERATOROVL_H_INCLUDED
