# include <iostream>
using namespace std;
# include<iomanip>

int main()
{
    double money, price;
    cout<<"Enter amount of money: ";
    cin>> money;
    cout<<"Enter price of a stamp: ";
    cin>> price;

    int numOfStamps=  money/price;  // type is int as number of stamps can't be decimal
    cout<< "number of stamps: " << numOfStamps<<endl;

    double rem_money = money - numOfStamps * price;
    cout << "Remainning money $: "<< setprecision (15)
    << rem_money << endl;

}