#ifndef TEMPLATE_H_INCLUDED
#define TEMPLATE_H_INCLUDED

template <typename T>

class DynArr
{
private:
    T *data;
    T size1;
public:
     DynArr();
     DynArr(int);
    ~DynArr();
    void setValue(int,T);
    T getValue(int);
};
#endif // TEMPLATE_H_INCLUDED
