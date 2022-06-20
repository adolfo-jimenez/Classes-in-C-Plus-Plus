//
//  main.cpp
//  Classes in C++
//  Description: This program is written and used for testing and practicing purposes.
//  Created by Adolfo Jimenez on 6/19/2022.
//  Copyright © 2022 Adolfo Jimenez. All rights reserved.
//


#include <iostream>
#include <string>
//Links the header file that has the DayOfYear Object and class functions.
#include "DayOfYear.h"


using namespace std;

//Cheap function made to break into a new line just like how the <br> is used in HTML.
void end_Of_Line(int);

int main() 
{
    DayOfYear birthday;

    cout << "Welcome Back to the World of C++ Programming!" << endl;
    cout << "Tell us what your birthday is so that we can gift you Shark Cards when the time comes." << endl;

    //Runs the readDate() function that asks for the user's d.o.b.
    birthday.readDate();


    cout << "So you're telling us your birthday is on ";
    birthday.printDate();
    cout <<"? Thank you, Shark Cards will be Good." << endl;

    return 0;
}


void end_Of_Line(int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << endl;
    }
}
