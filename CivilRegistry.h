//
//  CivilRegistry.h
//  hw1
//
//  Created by H. Furkan Vural on 28.03.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//
//#include "Time.h"

#ifndef CivilRegistry_h
#define CivilRegistry_h

#include "Citizen.h"
#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <iterator>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class CivilRegistry
{
public:
    
    list <Citizen> wApp;
    list <Citizen> wOutApp;
    list <Citizen>::iterator it;

    CivilRegistry()
    {
        it = wOutApp.begin();
    };
    //  ~CivilRegistry();
    void insertCitizen(const Citizen& );
    void removeCitizen(int idno);
    void printwlist ();
    void printwoutlist ();
};



#endif /* CivilRegistry_h */
