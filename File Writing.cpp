/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment:HW: E5.14
E8.01: Page 458 - DUE March 12th 
-Write a program that carries out the following tasks:
1: Open a file with the name hello.txt
2: Store the message "Hello, World!" in the file
3: Close the file
4: Open the same file again
5: Read the message into a string variable and print it
******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
 // Open a file with the name hello.txt.
 ofstream out;
 out.open("hello.txt");
 // Store the message "Hello, World!" in the file.
 out << "Hello, World!";
 // Close the file.
 out.close();
 // Open the same file again.
 ifstream in;
 in.open("hello.txt");

 // Read the message into a string variable and print it.
 string message;
 getline(in, message);
 cout << message << endl;
 in.close();
 return 0;
 }
