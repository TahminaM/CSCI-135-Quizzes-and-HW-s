/*
Tahmina Akther Munni
Professor: Tong Yi
CSCI 13500
Assignment: Lab Quiz 12

Lab Quiz 12 Define class Customer. private string members name, 
unique_id; public: Customer(), Customer(string name, 
string unique_id), string get_name(), string get_unique_id(), 
void set_name(string input_name), void set_unique_id(string input_unique_id)
*/

#include <iostream>
using namespace std;

class Customer
{
    private:
    string name;
    string unique_id;

    public:
    Customer(); // member names
    Customer(string nm, string ui);

    string get_name(); // member functions
    string get_unique_id();
    void set_name(string input_name); 
    void set_unique_id(string input_unique_id);
}; // 나중에 class 객체를 생성할 것이므로 바로 ;

Customer::Customer()
{
    name = "";
    unique_id = "";
}

Customer::Customer(string nm, string ui)
{
    name = nm; // left side = private, right side = function/public
    unique_id = ui;
}

string Customer::get_name()
{
    return name; // private -> public 으로 가져오려고
}

string Customer::get_unique_id()
{
    return unique_id; // private -> public
}

void Customer::set_name(string input_name)
{
    name = input_name; // 외부에서 받은 input_name -> private
    return;
}

void Customer::set_unique_id(string input_unique_id)
{
    unique_id = input_unique_id; // public -> private
    return;
}

