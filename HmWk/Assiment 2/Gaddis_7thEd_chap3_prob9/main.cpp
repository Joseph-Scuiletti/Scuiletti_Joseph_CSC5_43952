/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on Month Day, Year, Time AM/PM
 *      Purpose:
 */

#include <iostream>
#include <iomanip>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here

int main(){
//declare variables
float loanPay,insur,gas,oil,tires,maintnc,ttalmon,ttalyer;
cout<<"How much did you send monthly on your loan payment"<<endl;
cin>>loanPay;
cout<<"How much did you send monthly on your insurance"<<endl;
cin>>insur;
cout<<"How much did you send monthly on gas for your car"<<endl;
cin>>gas;
cout<<"How much did you send monthly on oil for your car"<<endl;
cin>>oil;
cout<<"How much did you send monthly on tires for your car"<<endl;
cin>>tires;
cout<<"How much did you send monthly on mmaintenance for your car"<<endl;
cin>>maintnc;
//caculate
ttalmon=loanPay+insur+gas+oil+tires+maintnc;
ttalyer=ttalmon*12;
//output
cout<< "the monthly amount for your car is "<<showpoint<<fixed<<setprecision(2)<<ttalmon<<endl;
cout<< "the anual amount for your car is "<<showpoint<<fixed<<setprecision(2)<<ttalyer<<endl;
    return 0;
}

