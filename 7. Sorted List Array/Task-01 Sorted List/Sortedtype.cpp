#include "Sortedtype.h"
#include "timeStamp.h"
#include <iostream>
using namespace std;

template <class Itemtype>
SortedType<Itemtype> :: SortedType()
{
    length = 0;
    currentPos = -1;
}

template <class Itemtype>
void SortedType<Itemtype> :: MakeEmpty()
{
    length = 0;
}

template <class Itemtype>
bool SortedType<Itemtype> :: IsFull()
{
    return(length == MAX_ITEMS);
}

template <class Itemtype>
int SortedType<Itemtype> :: LengthIs()
{
    return length;
}

template <class Itemtype>
void SortedType<Itemtype> :: ResetList()
{
    currentPos = -1;
}

template <class Itemtype>
void SortedType<Itemtype> :: GetNextItem(Itemtype& item)
{
    currentPos ++;
    item = info[currentPos];
}

template <class Itemtype>
void SortedType<Itemtype> :: InsertItem(Itemtype item)
{
    int location = 0;
    bool moreToSearch = (location < length);

    while(moreToSearch)
    {
        if(item > info[location])
        {
            location++;
        }
        else if(item < info[location])
        {
            moreToSearch = false;
        }
    }

    for(int i = length; i > location; i--)
    {
        info[i] = info[i-1];
    }
    info[location] = item;
    length++;
}

template <class Itemtype>
void SortedType<Itemtype> :: DeleteItem(Itemtype item)
{
    int location = 0;
    while(item != info[location])
    {
        location++;
    }

    for(int i = location+1; i<length; i++)
    {
        info[i-1] = info[i];
    }
    length--;
}

template <class Itemtype>
void SortedType<Itemtype> :: RetrieveItem(Itemtype& item, bool& found)
{
    int first = 0,last = length-1,mid;

    bool moreToSearch = (first<=last);

    found = false;

    while(moreToSearch && !found)
    {
        mid = (first+last)/2;
        if(item > info[mid])
        {
            first = mid+1;
            moreToSearch = (first<=last);
        }
        else if(item < info[mid])
        {
            last = mid-1;
            moreToSearch = (first<=last);
        }
        else{
                found = true;
            item = info[mid];
        }
    }
}

template class SortedType<timeStamp>;

