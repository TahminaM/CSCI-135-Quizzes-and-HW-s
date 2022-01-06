/******************************************************************************
Tahmina Akther Munni
Instructor: Tong yi
Course: CSCI 135 HW:E3.5
Write a program that reads 3 numbers and prints "increasing" if they are in increasing order, "decreasing" if they are in decreasing order, and "neither" other-wise.
-Here, "increasing" means "strictly increasing", with each value greater than its predecessor. The sequence 3 4 4 would not be considered increasing.


*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    int num1,num2,num3;
    cout << "Enter any three numbers: ";// enter numbers to check
    cin >> num1 >>num2 >> num3 ;
    
    if (num1<num2 ){
        if(num2<num3){
            cout << "Increasing";
        }else{
            cout << "Neither";
        }
    }
    
    else if(num1>num2){
        if(num2>num3){
            cout << "Decreasing";
        }else{
            cout << "Neither";
        }
    }
    else{
        cout << "Neither";
    }

    return 0;
}
