//
//  Citizen.cpp
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
#include <stdio.h>*/
#include "Citizen.h"



using namespace std;

Citizen:: Citizen(char* no, char* nam, char* surnam, bool app, const Time& appT, char* slot)
{
    idNo= new char[sizeof(no)];
    strcpy(idNo, no);
    
    name= new char[sizeof(nam)];
    strcpy(name, nam);
    
    surname= new char[sizeof(surnam)];
    strcpy(surname, name);
    
    appSlot= new char[sizeof(slot)];
    strcpy(appSlot, slot);
    
    appTime = appT;
    
    hasApp = app;
    
    
};

Citizen:: Citizen()
{
    
};

int Citizen:: getAppTime()
{
    double resulttime = 0;
    // resulttime = appTime.minute + (100*appTime.hour) + (10000*appTime.day) + (1000000*appTime.month) + (100000000*appTime.year);
    return resulttime;
}

