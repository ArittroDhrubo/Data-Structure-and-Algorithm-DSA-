#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<conio.h>

using namespace std;

int main(void)
{
    string name,age,uniname,department,id,year;

    cout << "Enter Your Name: ";
    getline(cin,name);
    cout << "Enter Your Age: ";
    getline(cin,age);
    cout << "Enter University: ";
    getline(cin,uniname);
    cout << "Enter Department: ";
    getline(cin,department);
    cout << "Enter ID: ";
    getline(cin,id);
    cout << "Enter Year: ";
    getline(cin,year);

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "University: " << uniname << endl;
    cout << "Department: " << department << endl;
    cout << "ID: " << id << endl;
    cout << "Year: " << year << endl;

    getch();

    return 0;
}

