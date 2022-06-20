//
//  DayOfYear.h
//  
//
//  Created by Adolfo Jimenez on 6/19/2022.
//  Copyright © 2022 Adolfo Jimenez. All rights reserved.
//

#ifndef DayOfYear_h
#define DayOfYear_h

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


//Class Object with private variables and public functions used to modify and/or display object attributes.
class DayOfYear 
{
    private:
        string month;
        int day;
        int year;
    public:
        void readDate();
        void printDate();
};

#endif /* DayOfYear_h */
