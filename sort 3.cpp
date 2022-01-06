/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, 
Assignment:HW: E5.15

Write a function sort3(int& a, int& b, int& c) that swaps its three arguments to
arrange them in sorted order. For example,
int v = 3;
int w = 4;
int x = 1;
sort3(v, w, x); // v is now 1, w is now 3, x is now 4

*******************************************************************************/

#include <iostream>

using namespace std;

void sort3(int& a, int& b, int& c) // pass by reference

{

    int temp;
    
    if(a > c)

{

    temp = a; // set a value in temp variable
    
    a = c;
    
    c = temp;

}

if(a > b) // when a is > than b
{

    temp = a;
    
    a = b;
    
    b = temp;

}

if(b > c)

{

    temp = b;
    
    b = c;
    
    c = temp;

}

}

int main() {

    int v = 3;
    
    int w = 4;
    
    int x = 1;
    
    sort3(v, w, x);
    
    cout<<"v = "<<v<<endl;
    
    cout<<"w = "<<w<<endl;
    
    cout<<"x = "<<x<<endl;
    
    return 0;

}