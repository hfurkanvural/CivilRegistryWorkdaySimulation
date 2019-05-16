//
//  Time.h
//  hw1
//
//  Created by H. Furkan Vural on 28.03.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//
#ifndef Time_h
#define Time_h

#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sstream>


using namespace std;


class Time
{
    int day;
    int month;
    int year;
    int hour;
    int minute;
    friend class Citizen;
    
public:
    Time(int,int,int,int,int);
    Time();
    Time(const Time &);
//    ~Time();
    string getTime();

    bool operator< (const Time&) const;
    bool operator> (const Time&) const;
    bool operator== (const Time&) const;
    
};

#endif /* Time_h */
