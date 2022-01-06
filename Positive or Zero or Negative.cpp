/******************************************************************************
Name:Tahmina Akther Munni
Email: Tahmina.munni49@myhunter.cuny.edu
Course: CSCI 135 HW E3.1
Professor: Tong ye 
This Program ask to enter for an integer and prints whether it is negative, zero, or positive.
 

*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    int num;
    cout<< "Enter a number: "; //Enter the number to be checked
    cin>>num;
    
    if(num < 0)
    {
        cout << num << " is negative."<<endl;
    }
    else if(num > 0)
    {
        cout << num << " is positive."<<endl;
    }
    else 
    {
        cout << num << " is zero."<<endl;
    }
    
    
    
    
    return 0;
}
