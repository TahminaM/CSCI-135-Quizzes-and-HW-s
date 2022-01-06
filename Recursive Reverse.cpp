/******************************************************************************

Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: HW 5
Description:

*******************************************************************************/
#include <iostream>

#include <string.h>

using namespace std;

string reverse(string str);

string reverse(string s) {

if (s.length() > 1)

return reverse(s.substr(1)) + s[0]; // recursive function

return s;

}

int main()

{

cout<<reverse("flow");

return 0;


}