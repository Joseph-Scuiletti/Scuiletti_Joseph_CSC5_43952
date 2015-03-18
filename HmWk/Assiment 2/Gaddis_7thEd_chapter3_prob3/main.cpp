/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March,17,2015,10:48 PM
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
//Declare Variables
float test1,test2,test3,test4,test5,avrg;
//input
cout<<"input your first of five test score to average them"<<endl;
cin>>test1;
cout<<"Now the second score"<<endl;
cin>>test2;
cout<<"Now the third score"<<endl;
cin>>test3;
cout<<"Now the fourth score"<<endl;
cin>>test4;
cout<<"finaly the fifth score"<<endl;
cin>>test5;
//caulating
avrg=(test1+test2+test3+test4+test5)/5;
//output
cout<<"the average is "<<showpoint<<setprecision(1)<<fixed<<avrg<<endl;
    return 0;
}

