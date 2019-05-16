//
//  CivilRegistry.cpp
//  hw1
//
//  Created by H. Furkan Vural on 28.03.2018.
//  Copyright © 2018 H. Furkan Vural. All rights reserved.
//
#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <iterator>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CivilRegistry.h"

using namespace std;

int str2inthour (const string &str);
int str2intminute (const string &str);
int str2intday (const string &str);
int str2intmonth (const string &str);
int str2intyear (const string &str);
int str2intappminute (const string &str);
int str2intapphour (const string &str);



void CivilRegistry::insertCitizen(const Citizen& citizen)
{
    
    
    if (citizen.hasApp == true)
    {
        if (!wApp.empty())
        {
            list <Citizen>::iterator Pw;
            Pw = wApp.begin();
            
            
            while ( citizen.appTime > Pw->appTime )
            {
                Pw++;
            }
            wApp.insert(Pw, citizen);
            printwlist();
            cout<<endl<<"deneme"<<endl;
        }
        else
            wApp.insert(wApp.begin(), citizen);
    }
    else
    {
        if (!wOutApp.empty())
        {
            list <Citizen>::iterator Pwo;
            Pwo = wOutApp.begin();
            
            while (citizen.appTime > Pwo->appTime )
            {
                Pwo++;
            }
            wOutApp.insert(Pwo, citizen);
          
        }
        else
        
            wOutApp.insert(wOutApp.begin(),citizen);
    }
    
};
void CivilRegistry:: removeCitizen(int idno)
{
    
    
}

void CivilRegistry:: printwlist()
{
    list <Citizen>::iterator P;
    P = wApp.begin();
    
    while (P != wApp.end())
    {
        cout<< P->name<< endl;
        P++;
    }
};

void CivilRegistry:: printwoutlist()
{
    list <Citizen>::iterator P;
    P = wOutApp.begin();
    
    while (P != wOutApp.end())
    {
        cout<< P->name<< endl;
        P++;
    }
};

int main(void)
{
    CivilRegistry registry;
    ifstream infile;
    infile.open ("input.txt");
    
    int number_of_lines = 0;
    string line, bosline;
    string idnum, nam, surnam, app, date, slot, clock;
    
    getline(infile, bosline);
    
    
    while (getline(infile, line))
        ++number_of_lines;
    
    
    Citizen citizenarray[number_of_lines];
    
    infile.clear();
    infile.seekg(0, ios::beg);
    
    int i =0;
    while (getline(infile, line )>> idnum >> nam >> surnam >> app >> date >> slot >> clock)
    {
 
        int ihour = str2inthour(clock);
        int iminute = str2intminute(clock);
        int iday = str2intday(date);
        int imonth = str2intmonth(date);
        int iyear = str2intyear(date);
        
        Time t(iday, imonth, iyear, ihour, iminute);
        
        char *cid = new char[idnum.length() + 1];
        strcpy(cid, idnum.c_str());
        
        char *cname = new char[nam.length() + 1];
        strcpy(cname, nam.c_str());
        
        char *csurname = new char[surnam.length() + 1];
        strcpy(csurname, surnam.c_str());
        
        char *cslot = new char[slot.length() + 1];
        strcpy(cslot, slot.c_str());
        bool bapp;
        
        if (app == "TRUE")
            bapp = true;
        else
            bapp = false;
        
        citizenarray[i] = Citizen ( cid, cname, csurname, bapp, t, cslot);
        
      //  cout<< ihour <<"."<< iminute <<" " << iday << "/"<< imonth << "/"<< iyear<< "   " <<cid<< "   " << "   " << cname << "   " << csurname<<endl<<endl;
        i++;
    }
    
    for (int j=0; j<number_of_lines; j++)
    {
        registry.insertCitizen(citizenarray[j]);
     }
    cout<<endl<<"Citizens with an appointment:"<<endl;
    registry.printwlist();
    cout<<endl<<"Citizens without an appointment:"<<endl;
    registry.printwoutlist();
    return 0;
}

int str2inthour (const string &str) {
    stringstream ss(str);
    int num;
    if((ss >> num).fail())
    {
        //ERROR
    }
    return num;
};
int str2intminute (const string &str) {
    string newstr = str.substr(2,3);
    stringstream ss(newstr);
    int num;
    if((ss >> num).fail())
    {
        //ERROR
    }
    return num;
};

int str2intday (const string &str) {
    string newstr = str.substr(0,2);
    stringstream ss(str);
    int num;
    if((ss >> num).fail())
    {
        //ERROR
    }
    return num;
};
int str2intmonth (const string &str) {
    string newstr = str.substr(3,4);
    stringstream ss(newstr);
    int num;
    if((ss >> num).fail())
    {
        //ERROR
    }
    return num;
};
int str2intyear (const string &str) {
    string newstr = str.substr(6,7);
    stringstream ss(newstr);
    int num;
    if((ss >> num).fail())
    {
        //ERROR
    }
    return num;
};
int str2intapphour (const string &str) {
    string newstr = str.substr();
    stringstream ss(newstr);
    int num;
    if((ss >> num).fail())
    {
        //ERROR
    }
    return num;
};
int str2intappminute (const string &str) {
    string newstr = str.substr(2,3);
    stringstream ss(newstr);
    int num;
    if((ss >> num).fail())
    {
        //ERROR
    }
    return num;
};


