//Name: Tahmina Akther Munni
//Professor: Tong Yi
//CSCI 13500
//Lab Quiz 6
#include<iostream>
using namespace std;
int max3(int a, int b, int c);
int main(){
	int a,b,c;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	cout<<"The maximum of the three is "<<max3(a,b,c); 
}
int max3(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c)
		return b;
	else
		return c;
}
