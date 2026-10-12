#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

template <class Itemtype>

class SortedType
{
public:
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void ResetList();
    void InsertItem(Itemtype);
    void DeleteItem(Itemtype);
    void RetrieveItem(Itemtype& item, bool& found);
    void GetNextItem(Itemtype&);
private:
    int length;
    Itemtype info[MAX_ITEMS];
    int currentPos;
};

#endif // SORTEDTYPE_H_INCLUDED
