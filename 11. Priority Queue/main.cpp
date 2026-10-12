#include <iostream>
#include "heaptype.h"
#include "pqtype.h"

using namespace std;

int main(void)
{
    PQType<int> pq(15);

    if(pq.IsEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    pq.Enqueue(4);
    pq.Enqueue(9);
    pq.Enqueue(2);
    pq.Enqueue(7);
    pq.Enqueue(3);
    pq.Enqueue(11);
    pq.Enqueue(17);
    pq.Enqueue(0);
    pq.Enqueue(5);
    pq.Enqueue(1);

    if(pq.IsEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    int value;

    pq.Dequeue(value);

    cout << "Dequeued value is: " << value << endl;

    pq.Dequeue(value);

    cout << "Dequeued value is: " << value << endl;

    int numberOfBags, minutes, total = 0;

    cout << "Enter numbers of bags: ";
    cin >> numberOfBags;

     cout << "Enter total minutes: ";
    cin >> minutes;

    PQType<int> bagsOfCandies(numberOfBags);

    for (int i = 0; i < numberOfBags; i++) {
        int temp;
        cout << i << "th bag contains: ";
        cin >> temp;
        bagsOfCandies.Enqueue(temp);
    }

    for (int i = minutes; i > 0; i--) {
        bagsOfCandies.Dequeue(value);
        total += value;
        bagsOfCandies.Enqueue(value / 2);
    }

    cout << "Maximum Candies you finished: " << total << endl;

    return 0;
}
