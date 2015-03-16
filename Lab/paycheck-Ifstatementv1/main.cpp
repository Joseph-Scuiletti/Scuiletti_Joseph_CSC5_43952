/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 16, 2015, 8:13 AM
 */

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//user Libraries

//global constants

//function prototypes

int main(int argc, char** argv) {
//declare varibals
    ofstream out;
    float hrsWkd;
    float payRate;
    float oRate=1.5f;
    float oTime=40.0f;
    float payChk;
    //open the file
    out.open("payroll.dat");
    //promt the users for input
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate($'s/hr)"<<endl;
    cin>>payRate;
    //calculate
     if(hrsWkd<oTime){
                payRate*hrsWkd;
    }if(hrsWkd>oTime){
                payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    }
    //output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"(/hr)"<<endl;
    cout<<"Over time rate = "<<oRate<<endl;
    cout<<"Over time Begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    //close the file
    out.close();
    return 0;
}

