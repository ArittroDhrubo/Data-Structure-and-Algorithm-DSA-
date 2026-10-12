#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

template <class Itemtype>

class Unsortedtype
{
public:
    Unsortedtype();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(Itemtype);
    void DeleteItem(Itemtype);
    void RetrieveItem(Itemtype&,bool&);
    void ResetList();
    void GetNextItem(Itemtype&);
private:
    int length;
    Itemtype info[MAX_ITEMS];
    int currentPos;
};

#endif // UNSORTEDTYPE_H_INCLUDED
