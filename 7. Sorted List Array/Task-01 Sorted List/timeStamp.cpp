#include "timeStamp.h"
#include "Sortedtype.h"
#include <iostream>
using namespace std;

timeStamp :: timeStamp()
{
    hour = 0;
    mint = 0;
    sec = 0;
}

timeStamp :: timeStamp(int h, int m, int s)
{
    hour = h;
    mint = m;
    sec = s;
}

int timeStamp :: getHour()
{
    return hour;
}

int timeStamp :: getMint()
{
    return mint;
}

int timeStamp :: getSec()
{
    return hour;
}

bool timeStamp :: operator>(timeStamp others)
{
    if(hour != others.getHour())
    {
        return (hour>others.getHour());
    }
    else if(mint != others.getMint())
    {
        return (mint>others.getMint());
    }
    else
    {
        return (sec>others.getSec());
    }
}

bool timeStamp :: operator<(timeStamp others)
{
    if(hour != others.getHour())
    {
        return (hour<others.getHour());
    }
    else if(mint != others.getMint())
    {
        return (mint<others.getMint());
    }
    else
    {
        return (sec<others.getSec());
    }
}

bool timeStamp :: operator==(timeStamp others)
{
    return (hour == others.getHour() && mint == others.getMint() && sec == others.getSec());
}
bool timeStamp :: operator!=(timeStamp others)
{
    return (hour != others.getHour() && mint != others.getMint() && sec == others.getSec());
}

void timeStamp :: PrintRec()
{
    cout << hour << ": " << mint << ": " << sec << endl;
}
