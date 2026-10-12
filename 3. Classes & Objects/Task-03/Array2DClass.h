#ifndef ARRAY2DCLASS_H_INCLUDED
#define ARRAY2DCLASS_H_INCLUDED

class Dyn2DArr
{
private:
    int **matrix;
    int size1,size2;
public:
    Dyn2DArr();
    Dyn2DArr(int,int);
    ~Dyn2DArr();
    void setValue(int,int,int);
    int getValue(int,int);
};

#endif // ARRAY2DCLASS_H_INCLUDED
