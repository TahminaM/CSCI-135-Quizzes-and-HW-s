/******************************************************************************

 Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: E 6.18
Description:Write a function vector<int> append<vector<int> a, vector<int> b) that appends one vector after another
-Ex: if a is: 1 4 9 16                and b is: 9 7 4 9 11
-Then append returns the vector: 1 4 9 16 9 7 4 9 11


*******************************************************************************/
#include<iostream>
#include<vector>

using namespace std;
vector <int> append(vector <int> a,vector <int> b);
int main() {
    vector <int> a{1,4,9,16};
    vector <int> b{9,7,4,9,11};
    int n;
    vector <int> result;
    result = append(a,b);
    for(int n : result)
       cout << n << " ";
  
   return 0;
}
vector <int> append(vector <int> a,vector <int> b){
   int asize = a.size();
   int bsize = b.size();
   int k=0,i;
   for(i = 0;i<bsize;i++)
             a.push_back(b.at(i));
       
return a;
}