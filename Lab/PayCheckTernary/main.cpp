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
    payChk=hrsWkd<oTime?
                payRate*hrsWkd:
                payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    //output
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    out<<"Pay Rate = $"<<payRate<<"(/hr)"<<endl;
    out<<"Over time rate = "<<oRate<<endl;
    out<<"Over time Begins at "<<oTime<<"(hrs)"<<endl;
    out<<"Gross Pay = $"<<payChk<<endl;
    //close the file
    out.close();
    return 0;
}

