//Name: Tahmina Akther Munni
//Professor: Tong Yi
//CSCI 13500
//Lab Quiz 9
//Define a function "int unbalanced_brackets(string input)" that returns the difference of unbalanced open and closed brackets
//-Ex: If input is "{{}" it returns 1
//-Ex: If input is "{}}}}" it returns -3
//-Ex: If input is "}{}{{{" it returns 2

#include <iostream>
#include <string>
using namespace std;

int unbalanced_brackets(string input){
    
    int count = 0;// set a counter
    
    for(int i=0; i<input.length(); i++){
        
        if(input[i]=='{')
        count++;
        
        else if(input[i]=='}')
        count--;
    }
      
    return count;
}

int main(){
    string s;
    cout<<"Enter brackets: ";
    cin>>s;
    
    int answer = unbalanced_brackets(s); //calling the unbalanced_brackets function 
    cout<< answer <<endl;   //and taking the returned answer.
    
    return 0;
}

