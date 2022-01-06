/******************************************************************************

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: HW 7.1
Write a function void sort2(double* p, double* q) that receives two pointers and sorts the values to which they point.
-If you call sort 2(&x, &y) they x<= y after the call
HINT: Pointers point to the location that the value is at. So we are not sorting based on value this time, we are sorting based on location

*******************************************************************************/
#include <iostream>
using namespace std;

void sort2(double* p, double* q);// prototype
int main()
{
   double x,y;
   cout << "Enter first value: "<< endl;// enter first value
   cin >> x;
   cout << "Enter second value: " << endl;// enter second value
   cin >> y;
  
   sort2(&x,&y);
   cout << x << y;
   return 0;
}

void sort2(double* p, double* q)
{

   if(*p > *q)
   {  
       double tmp = *p;
       *p = *q;
       *q = tmp;
   }
}