/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment:HW: E5.06
Write a function string middle(string str) that returns a string containing the middle character in str if the length of str is odd, or the two middle characters if the length is even..
-Example: middle("middle") returns "dd"
******************************************************************************/
#include <iostream>

using namespace std;


	string middle (string s) 
	{
    if (s.size() % 2 == 0) 
    {    // if string is of even length
        return s.substr((s.size()-1)/2, 2); // return middle 2 characters
    } else {    // if string is of even odd length
        return s.substr(s.size()/2, 1); // then return the middle single character
    }
	}

int main() 
{
    cout << middle("Tahmina") << endl;
    cout << middle("Hunter") << endl;
    return 0;
}
	

