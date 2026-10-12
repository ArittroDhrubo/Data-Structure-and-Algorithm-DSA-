#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include <string>
using namespace std;
class StudentInfo{
private:
    string name;
    int studentID;
    double cgpa;
public:
    StudentInfo();
    StudentInfo(int,string,double);
    void PrintRec();
    bool operator==(StudentInfo others);
    bool operator!=(StudentInfo others);
    int getStudentID();
};

#endif // STUDENTINFO_H_INCLUDED
