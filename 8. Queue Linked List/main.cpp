#include <iostream>
#include "quetype.h"

using namespace std;

int main()
{
    int size1;

    cout << "Enter Size: ";
    cin >> size1;

    int arr[size1];

    for(int i=0; i<size1; i++)
    {
        cout << "Enter " << i << "th element: ";
        cin >> arr[i];
    }

    QueType<int> queue1,cost;

    for(int i=0; i<size1; i++)
    {
        queue1.Enqueue(arr[i]);
        cost.Enqueue(1);
    }

    int target,temp,count=0;
    cout << "Enter target: ";
    cin >> target;

    while(true)
    {
        temp = 0;
        queue1.Dequeue(temp);
        cost.Dequeue(count);
        if(target == temp)
        {
            break;
        }

        else
        {
            count++;
            for(int i=0;i<size1;i++)
            {
                queue1.Enqueue(temp+arr[i]);
                cost.Enqueue(count);
            }
        }
    }

    cout << count << endl;
    return 0;
}
