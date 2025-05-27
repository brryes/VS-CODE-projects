//SAVE Q DIN DITO PERO INDI GAGANA KASI MAY WINDOWS.H

//final practical exam CCSOO03LLAB

#include <iostream>
#include <ctime>
//#include <windows.h>

using namespace std;

int getseconds(int sec);
int getminutes(int min);
int gethours(int hr);

void displaytime();

time_t t = time(NULL);
tm *timePtr = localtime(&t);

int seconds = (timePtr->tm_sec);
int minutes = (timePtr->tm_min);
int hr = (timePtr->tm_hour);

int main()
{
    displaytime();
}

void displaytime()
{

    system("cls");
    cout << "TIME: ";
    cout << " " << hr << " : " << minutes << " : " << seconds << " " << endl;
    seconds++;

    getseconds(0);
    getminutes(minutes);
    gethours(hr);

    Sleep(1000);
    main();
}

int getseconds(int sec)
{

    if (seconds >= 60)
    {
        seconds = 1;
        minutes--;
    }

    return seconds;
}

int getminutes(int min)
{

    if (minutes >= 60)
    {
        minutes = 0;
        hr++;
    }

    return hr;
}

int gethours(int hr)
{
    if (hr > 24)
    {
        hr = 00;
    }
    return hr;
}

