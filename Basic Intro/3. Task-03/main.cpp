#include <iostream>
#include "EvenOddVerifier.h"

using namespace std;

int main(void)
{
    int num;

    cout << "Enter Number: ";
    cin >> num;

    if(EvenOddverf(num)== true)
    {
        cout << "The number is even." << endl;
    }
    else{
        cout << "The number is odd." << endl;
    }
    return 0;
}
