#ifndef TEMPLATE2D_H_INCLUDED
#define TEMPLATE2D_H_INCLUDED

template <class T>

class Dyn2DArr
{
private:
    T **matrix;
    T size1,size2;
public:
    Dyn2DArr();
    Dyn2DArr(int,int);
    ~Dyn2DArr();
    void setValue(int,int,T);
    T getValue(int,int);
};

#endif // TEMPLATE2D_H_INCLUDED
