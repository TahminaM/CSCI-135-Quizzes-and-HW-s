/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab quiz: 03.
This program initialize an array of 1-10 uses cout to print each each number in a separate line
******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};       //stores values from 1 to 10
   
    for(int i=0; i<10; i++)//for loop to print all elements of array
    {
        arr[i] = 1+i;
        cout << "cout>>" << arr[i] << endl;  //print values separately
        
    }
    return 0;
}
