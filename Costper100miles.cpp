/******************************************************************************

Tahmina Akther Munni
Instructor: Tong yi
Course: CSCI 135
This program asks the user to input
 • The number of gallons of gas in the tank
 • The fuel efficiency in miles per gallon
 • The price of gas per gallon
 Then print the cost per 100 miles and how far the car can go with the gas in the tank.
*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    double gallons, fuel_efficiency_mpg, price, miles;
    
    cout << "enter number of gallons; ";//number of gallons of gas
    cin >> gallons;
    
    cout << "enter miles per gallons; ";//fuel efficiency miles per gallons
    cin >> fuel_efficiency_mpg;
    
    cout << "enter price per gallons; ";// price per gallons
    cin >> price;
    
    cout << " Cost per 100 miles: "<< (100 * price/fuel_efficiency_mpg)<<endl;
    cout << " Number of miles: "<< (fuel_efficiency_mpg * gallons)<< endl;
    
    return 0;
}
