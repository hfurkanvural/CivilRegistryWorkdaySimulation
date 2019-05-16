//
//  Time.cpp
//  hw1
//
//  Created by H. Furkan Vural on 28.03.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//
/*#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <iterator>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

*/
#include "Time.h"

using namespace std;

string IntToString (int);

Time:: Time(int d, int m, int y, int h, int min)
{
    day = d;
    month = m;
    year = y;
    hour = h;
    minute = min;
}

Time:: Time()
{
    day = NULL;
    month = NULL;
    year = NULL;
    hour = NULL;
    minute = NULL;
}

Time:: Time(const Time &t)
{
    day = t.day;
    month = t.month;
    year = t.year;
    hour = t.hour;
    minute = t.minute;
}


string Time::getTime()
{
    string str;
    str.append(IntToString (hour));
    str.append(".");
    str.append(IntToString (minute));
    str.append(" ");
    str.append(IntToString (day));
    str.append("/");
    str.append(IntToString (month));
    str.append("/");
    str.append(IntToString (year));
    
    return str;
}

bool Time::operator< (const Time& t) const
{
    if ( year > t.year)
        return false;
    else if (month > t.month)
        return false;
    else if (day > t.day)
    {
        cout << day <<"  " << t.day << endl;
        return false;
    }
    else if (hour > t.hour)
        return false;
    else if (minute > t.minute)
        return false;
    
    return true;
}

bool Time::operator > (const Time& t) const
{
    if ( year < t.year)
    {
        return false;
    }
    else if (month < t.month)
    {
        return false;
    }
    else if (day < t.day)
    {
        return false;
    }
    else if (hour < t.hour)
    {
        return false;
    }
    else if (minute < t.minute)
    {
        return false;
    }
    
    return true;
    
}

bool Time::operator== (const Time& t) const
{
    if ( year != t.year)
        return false;
    else if (month != t.month)
        return false;
    else if (day != t.day)
        return false;
    else if (hour != t.hour)
        return false;
    else if (minute != t.minute)
        return false;
    
    return true;
    
}


string IntToString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}
