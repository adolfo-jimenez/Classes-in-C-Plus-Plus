//
//  main.cpp
//  Classes in C++
//  Description: This program is written and used for testing and practicing purposes.
//  Created by Adolfo Jimenez on 6/19/2022.
//  Copyright © 2022 Adolfo Jimenez. All rights reserved.
//


#include <iostream>
#include <string>

void end_Of_Line(int);

using namespace std;

int main() {

    cout << "Welcome Back to the World of C++ Programming!" << endl;
    return 0;

}

void end_Of_Line(int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << endl;
    }
}