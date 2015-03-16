/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 *
 * Created on March 16, 2015, 9:52 AM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//Declare Variables
    unsigned short seatA,seatB,seatC,priceA,priceB,priceC,incomeA,incomeB,incomeC,total;
    //input
    priceA=15;
    priceB=12;
    priceC=9;
    cout<<"How many softball stadium seats were sold for class A"<<endl;
    cin>>seatA;
    cout<<"How many seats were sold for class B"<<endl;
    cin>>seatB;
    cout<<"How many seats were sold for class C"<<endl;
    cin>>seatC;
    //Calculate
    incomeA=seatA*priceA;
    incomeB=seatB*priceB;
    incomeC=seatC*priceC;
    total=incomeA+incomeB+incomeC;
    //output
    
    cout<<"The income for class A is $"<<incomeA<<endl;
    cout<<"The income for class B is $"<<incomeB<<endl;
    cout<<"The income for class C is $"<<incomeC<<endl;
    
    cout<<"The income for all classes is $"<<total;
            
    return 0;
}

