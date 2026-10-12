#ifndef ARRAYCLASS_H_INCLUDED
#define ARRAYCLASS_H_INCLUDED

class DynArr
{
private:
    int *data;
    int size1;
public:
     DynArr();
     DynArr(int);
    ~DynArr();
    void allocate(int);
    void setValue(int,int);
    int getValue(int);
};

#endif // ARRAYCLASS_H_INCLUDED
