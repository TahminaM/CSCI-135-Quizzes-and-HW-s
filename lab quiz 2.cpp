/******************************************************************************
Enter two integers from console, find out the bigger of these two integers.
Sample input/output:
Enter the first number: 7 
Enter the second number: 3
The larger of the two is 7
(1) Write cpp code and submit to gradescope under Lab Quiz 02. Due 11 PM of Feb 26, 2022.
(2) Finish Lecture Quiz on 2/22/2021 in gradescope. Due 11 PM of Feb 25, 2022.
*******************************************************************************/
//Author: Tahmina Akther Munni
//Course: CSCI-135
//Instructors: Tong yi, Minh Nguyen
//Assignment: Lab quiz 2.
//this program Enter two integers from console, find out the bigger of these two integers.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2 ;
    cout<< "Enter the first number: ";
    cin>> num1;       // read the first number

    cout<< "Enter the second number: ";
    cin>> num2;    // read the second number

    if(num1 < num2)    //if num2 is greater than num1
    {
        cout << "The larger of the two is "<< num2;
    }
    else     // when num1>num2         
        
    {
        cout << "The larger of the two is "<< num1;
    }

    return 0;
}
