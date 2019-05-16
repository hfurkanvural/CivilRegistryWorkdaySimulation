//
//  Citizen.h
//  hw1
//
//  Created by H. Furkan Vural on 28.03.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//

#ifndef Citizen_h
#define Citizen_h

#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Time.h"

using namespace std;


class Citizen: public Time
{

    char *idNo;
    char *surname;
    char *name;
    bool hasApp;
    Time appTime;
    char *appSlot;
    friend class CivilRegistry;

public:
    
    Citizen(char*, char*, char*, bool, const Time&, char*);
    Citizen();
    // ~Citizen();
    int getAppTime();
};


#endif /* Citizen_h */
