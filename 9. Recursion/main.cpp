#include <iostream>
#include <math.h>

using namespace std;


int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }

    return n*factorial(n-1);
}

int sumofDIG(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n%10+sumofDIG(n/10);
}

int findMin(int arr[], int n)
{

    if (n == 1) {
        return arr[0];
    }


    int minRest = findMin(arr, n - 1);


    if (arr[n - 1] < minRest) {
        return arr[n - 1];
    } else {
        return minRest;
    }
}

int DecToBin(int n)
{if (n == 0)
        return 0;
    else
        return n % 2 + 10 * DecToBin(n / 2);
}

double Seriessum(int n)
{
    if(n==0)
    {
        return 1;
    }

    return 1.0/pow(2,n) + Seriessum(n-1);
}

void printArray(int arr[],int size1,int index)
{

    if (index == size1) {
        return;
    }

    cout << arr[index] << endl;

    printArray(arr,size1,index+1);
}

int noOfDigits(int n)
{
    static int count1 = 0;
    if(n!=0)
    {
        count1++;
        noOfDigits(n/10);
    }
    return count1;
}
int main(void)
{

    int fib = fibonacci(6);
    cout << "Res-fib: " << fib << endl;

    int fac = factorial(5);
    cout << "Res-fac: " << fac << endl;

    int sum = sumofDIG(120);
    cout << "Sum: " << sum << endl;

    int arr[] = {5, 3, 8, 1, 4};


    int result = findMin(arr, 5);


    cout << "The minimum element is: " << result << endl;

    cout << "Print the array elemnets: ";

    printArray(arr,5,0);


    int decnum,Bin;

    cout << "Enter a Decimal Number: " << endl;
    cin >> decnum;

    if(decnum == 0)
    {
        cout << "Binary Representation: 0";
    }
    else{
        Bin = DecToBin(decnum);
    }
    cout << "Binary Representation of " << decnum << " is: " << Bin << endl;

    cout << "Sum of the series: " << Seriessum(2) << endl;

    int num,count;

    cout << "Enter a number: ";
    cin >> num;

    count = noOfDigits(num);

    cout << "Number of Digits: " << count << endl;
    return 0;
}
