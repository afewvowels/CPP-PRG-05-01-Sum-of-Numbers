//
//  main.cpp
//  PRG-5-1-Sum-of-Numbers
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks the user for a positive integer value. The program should use
//  a loop to get the sum of all integers from 1 up to the number entered. For example,
//  if the user enters 50, the loop will find the sum of 1, 2, 3, 4, ..., 50.
//
//  Input Validation: Do not accept a negative starting number.

#include <iostream>

using namespace std;

int main()
{
    int intUserValue,
        intSumCounter,
        intSumTotal;
    
        intUserValue = 0;
        intSumCounter = 0;
        intSumTotal = 0;
    
    cout << "Please enter a positive integer value:\n";
    cin >> intUserValue;
    while(!cin || intUserValue < 0 || intUserValue > 1000)
    {
        cout << "Please select an integer from 0 to 1,000:\n";
        cin.clear();
        cin.ignore();
        cin >> intUserValue;
    }
    
    while(intSumCounter <= intUserValue)
    {
        intSumTotal += intSumCounter;
        cout << intSumTotal << endl;
        intSumCounter++;
    }
    
    return 0;
}





