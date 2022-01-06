
// Author: Tahmina Akther Munni
// Course: CSCI-135
// Instructors: Tong yi, Minh Nguyen
// Assignment: E4.08 Page 221.
// This program asks the user to input a word and prints each character of the word on a separate line.

#include <iostream>
using namespace std;

int main() 
{
   string word;              //define variable to store the input
   cout << "Enter a word: ";
   cin >> word;
   
   for (int i=0; i<word.length(); i++)
   {
       cout<< word[i] << endl; // print each character in the new line
   }
   
  
   return 0;
}

