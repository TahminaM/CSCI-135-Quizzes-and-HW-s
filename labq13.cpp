/*
Tahmina Akther Munni
Professor: Tong Yi
CSCI 13500
Assignment: Lab Quiz 13

Lab Quiz 13 - Vectors Begins with an introductory comment Contains 
a function vector<int> makeVector(int n) taking an integer as a parameter, 
and returns a vector of n integers that range from 0 to n - 1. 
Nonpositive input returns an empty vector.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n) // int vector[]
{
	vector<int> ans;
	for (int i = 0; i < n; i++)
	{
		ans.push_back(i);
	}
	return ans;
}
