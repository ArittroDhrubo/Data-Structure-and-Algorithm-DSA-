#include <iostream>
#include "Sortedtype.h"
#include "timeStamp.h"
using namespace std;

int main(void)
{
    SortedType<timeStamp> listtime;

    timeStamp obj1(15,34,23);
    timeStamp obj2(13,12,2);
    timeStamp obj3(5,40,13);
    timeStamp obj4(17,36,25);
    timeStamp obj5(5,02,20);

    listtime.InsertItem(obj1);
    listtime.InsertItem(obj2);
    listtime.InsertItem(obj3);
    listtime.InsertItem(obj4);
    listtime.InsertItem(obj5);

    timeStamp temp(17,36,25);
    listtime.DeleteItem(temp);

    timeStamp time;
    //listtime.ResetList();
    for(int i = 0; i < listtime.LengthIs(); i++)
    {
        listtime.GetNextItem(time);
        time.PrintRec();
    }
    return 0;
}
