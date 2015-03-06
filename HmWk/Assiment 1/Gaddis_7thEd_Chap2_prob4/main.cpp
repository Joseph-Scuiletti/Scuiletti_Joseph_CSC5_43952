/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March,5,2015,11:54 PM
 *      Purpose:fourth homework problem
 */

#include <iostream>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here

int main() {
//Declare Varibles
float meal,tax,tip,total;
tax=.15;
cout<<" This will creat  a restaurants bill "<< endl;
cout<<" Format $XX.XX as the meal charge"<< endl;
cin>>meal;
//calculate for tip
cout<< " Calculating tip "<<endl;
tip=meal*tax;
cout<<" Calculating total"<<endl;
total=meal+tip;
//output
cout<<" Meal charge   "<<"$"<<meal<<endl;
cout<<" Tax   "<<tax*100<<"%"<<endl;
cout<<" Tip   "<<"$"<<tip<<endl;
cout<<" Total Bill   "<<"$"<<total<< endl;
//Joe goes
return 0;
}

