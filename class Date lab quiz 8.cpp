//Name: Tahmina Akther Munni
//Professor: Tong Yi
//CSCI 13500
//Lab Quiz 8
//Define a class Date, which contains public integer members for year, month, day, and string member day_of_week
//-Define a function "void printDate(Date * input)" that prints Date in format: Day of Week, Mo/Day/Yr
//-Ex: Friday, 10/29/19

#include <iostream>
#include <string>
using namespace std;

class Date {   //Define class Date which contains public integer members for year, month, day, and string member day_of_week
public:
    int year;
    int month;
    int day;
    string day_of_week;
};

void printDate(Date *input) { //pointing public integer members using function: input->
    cout << input->day_of_week << ", " << input->month << "/" << input->day << "/" << input->year << endl;
}

int main() {
    Date example1; //Date is a class type that defined already
    example1.month = 10;
    example1.day = 29;
    example1.year = 19;
    example1.day_of_week = "Friday";

    Date ex2;
    ex2.month = 3;
    ex2.day = 24;
    ex2.year = 10;
    ex2.day_of_week = "Thursday";

    printDate (& example1); //will print example1
    printDate (& ex2); // will print ex2
    return 0;
}