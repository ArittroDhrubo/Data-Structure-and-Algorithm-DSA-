#include "StudentInfo.h"
#include "Unsortedtype.h"
#include <iostream>
using namespace std;

StudentInfo :: StudentInfo()
{
    studentID = 0;
    name = "";
    cgpa = 0.0;
}

StudentInfo :: StudentInfo(int i,string n,double cg)
{
    studentID = i;
    name = n;
    cgpa = cg;
}

bool StudentInfo :: operator==(StudentInfo others)
{
    return (studentID = others.studentID);
}

bool StudentInfo :: operator!=(StudentInfo others)
{
    return (studentID != others.studentID);
}

int StudentInfo :: getStudentID()
{
    return studentID;
}

void StudentInfo :: PrintRec()
{
    cout << studentID << " " << name << " " << cgpa << endl;
}
