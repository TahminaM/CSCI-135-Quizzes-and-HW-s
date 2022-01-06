//Name: Tahmina Akther Munni
//Professor: Tong Yi
//CSCI 13500
//Lab Quiz 7
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
void remove_e(string &sentence);
int main(){
	string line,a;
	cout<<"Enter the line: ";
	getline(cin,line);	
	remove_e(line);
}
void remove_e(string &sentence){
int i;
string a="";
	for (i=0;i<sentence.length();i++){
		if(sentence[i] !='e'){
			a+= sentence[i];
		
		}
	}
		
sentence=a;
}
