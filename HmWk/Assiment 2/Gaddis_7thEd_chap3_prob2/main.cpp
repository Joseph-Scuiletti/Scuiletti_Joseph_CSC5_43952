/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 *
 * Created on March 16, 2015, 9:52 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global constants

//Function Prototypes

//Execution
int main() {
//Declare Variables
    unsigned short seatA,seatB,seatC,priceA,priceB,priceC,incomeA,incomeB,incomeC; float total; //had to make a total a float to insure it will be in fixed point notation
    //input
    priceA=15;//price for class A tickets
    priceB=12;//price for class B tickets
    priceC=9;//price for class C tickets
    cout<<"How many softball stadium seats were sold for class A(only in intgers)"<<endl;
    cin>>seatA;
    cout<<"How many seats were sold for class B"<<endl;
    cin>>seatB;
    cout<<"How many seats were sold for class C"<<endl;
    cin>>seatC;
    //Calculate
    incomeA=seatA*priceA;//used to caculate the income of just said rows
    incomeB=seatB*priceB;
    incomeC=seatC*priceC;
    total=incomeA+incomeB+incomeC;
    //output
    cout<<"The income for class A is $"<<incomeA<<endl;// I wanted to include this information  because it makes it easssier to check caculation
    cout<<"The income for class B is $"<<incomeB<<endl;
    cout<<"The income for class C is $"<<incomeC<<endl;
    cout<<"The income for all classes is $"<<showpoint<<setprecision(2)<<fixed<<total;
    //joe goes

    return 0;
}

