#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp{

private:
    int hour;
    int mint;
    int sec;

public:
    timeStamp();
    timeStamp(int,int,int);
    bool operator==(timeStamp others);
    bool operator!=(timeStamp others);
    bool operator>(timeStamp others);
    bool operator<(timeStamp others);
    int getHour();
    int getMint();
    int getSec();
    void PrintRec();
};

#endif // TIMESTAMP_H_INCLUDED
