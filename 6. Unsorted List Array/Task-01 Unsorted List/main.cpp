#include <iostream>
#include "Unsortedtype.h"
#include "StudentInfo.h"

using namespace std;

int main(void)
{
    Unsortedtype<StudentInfo> listdata;

    StudentInfo obj1(1394,"Arittro",3.80);
    StudentInfo obj2(1395,"Dhrubo",3.40);
    StudentInfo obj3(1364,"Shadhin",3.50);
    StudentInfo obj4(1343,"Awsaf",3.60);
    StudentInfo obj5(1384,"Uma",3.80);

    listdata.InsertItem(obj1);
    listdata.InsertItem(obj2);
    listdata.InsertItem(obj3);
    listdata.InsertItem(obj4);
    listdata.InsertItem(obj5);

    StudentInfo temp(1395,"Dhrubo",3.40);
    listdata.DeleteItem(temp);

    StudentInfo stitem;
    for(int i=0;i < listdata.LengthIs(); i++)
    {
        listdata.GetNextItem(stitem);
        stitem.PrintRec();
    }

    StudentInfo searchStudent(0, "", 0);
    bool found1 = false;
    listdata.RetrieveItem(searchStudent, found1);
    if (found1)
    {
       cout << "Item is found: ";
       searchStudent.PrintRec();
    }
    else
    {
       cout << "Item is not found" << endl;
    }

    return 0;
}
