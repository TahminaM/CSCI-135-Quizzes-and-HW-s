/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: Lab Quiz 11

Lab Quiz 11 - Money Define class Money, which contains public int members dollars and cents 
A NON-member function `Money add_money(Money x, Money y)` 
which returns a Money object that contains sum of x and y in dollars and cents. Value in cents is < 10
*******************************************************************************/
#include <iostream>
using namespace std;
                                // class declaration 
class Money{
public:
int dollars;                    //public variable dollars.
int cents;                       // public variable cents.
};

// Non member function which takes two objects of class type parameters and returns an object of class type. 
Money add_money(Money x,Money y){
int cents  =   x.cents + y.cents;                  // adds cents.
int dollars =   x.dollars + y.dollars;            // adds dollars.

if(cents>=100){ // if cents sums to greater or equal to 100.
dollars+=cents/100;
cents=cents%100;
}
return {dollars,cents}; // returns an object
}

int main()
{
Money m1={4, 80}; // creates a class type object m1.
Money m2={3, 90}; // creates a class type object m2.
Money m3=add_money(m1,m2); // function call to add_money

cout<<"Dollars is now "<<m3.dollars<<endl; // prints the result.
cout<<"Cents is now "<<m3.cents<<endl; // prints the result.
return 0;
}