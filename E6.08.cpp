/******************************************************************************
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: E6.08
-Write a function bool equals(int a[], int a_size, int b[], int b_size) that checks whether two arrays have the same elements in the same order


*******************************************************************************/

#include<iostream>
using namespace std;
bool equals(int a[], int a_size, int b[], int b_size){
   if(a_size != b_size) //if sizes are not equal
       return false; 
   
   for(int i=0;i<a_size;i++){ //loop upto size of the array
       if(a[i]!=b[i]) //a and b are not equal
           return false; 
   }
   return true; 
}
int main(){
   int a[5]={5,4,3,2,1};
   int b[5]={5,4,3,2,1};
   cout<<equals(a,5,b,5);
}