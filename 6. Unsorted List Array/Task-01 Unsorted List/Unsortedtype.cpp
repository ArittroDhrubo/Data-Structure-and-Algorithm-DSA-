#include "Unsortedtype.h"
#include "StudentInfo.h"
#include <iostream>
using namespace std;

template <class Itemtype>
Unsortedtype<Itemtype> :: Unsortedtype()
{
    length = 0;
    currentPos = -1;
}

template <class Itemtype>
void Unsortedtype<Itemtype> :: MakeEmpty()
{
    length = 0;
}

template <class Itemtype>
bool Unsortedtype<Itemtype> :: IsFull()
{
   return (length == MAX_ITEMS);
}

template <class Itemtype>
int Unsortedtype<Itemtype> :: LengthIs()
{
   return length;
}

template <class Itemtype>
void Unsortedtype<Itemtype> :: ResetList()
{
   currentPos = -1;
}

template <class Itemtype>
void Unsortedtype<Itemtype> :: GetNextItem(Itemtype& item)
{
   currentPos ++;
   item = info[currentPos];
}

template <class Itemtype>
void Unsortedtype<Itemtype> :: InsertItem(Itemtype item)
{
   info[length] = item;
   length ++;
}

template <class Itemtype>
void Unsortedtype<Itemtype> :: DeleteItem(Itemtype item)
{
   int location;
   location = 0;

   while(item != info[location])
   {
       location++;
   }
   info[location] = info[length-1];
   length--;
}

template <class Itemtype>
void Unsortedtype<Itemtype> :: RetrieveItem(Itemtype& item,bool& found)
{
   int location;
   location = 0;
   bool moreToSearch = (location < length);
   found = false;

   while(moreToSearch && !found)
   {
       if(item == info[location])
       {
           found = true;
           item = info[location];
       }

       else
       {
       location++;
       moreToSearch = (location < length);
       }
   }
}

template class Unsortedtype<StudentInfo>;
