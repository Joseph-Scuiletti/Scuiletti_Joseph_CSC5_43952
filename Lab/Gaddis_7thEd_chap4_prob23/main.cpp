/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March 25, 2015, 8:50 AM
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
    float vwdHrs;
    char package;
    const int SIZE=40;
    char name[SIZE];
    float bill;
    //open the file
    out.open("cable.dat");
    //promt the users for input
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your package A,B,C"<<endl;
    cin>>package;
    cout<<"what is the custmers name?"<<endl;
    cin.ignore();
    cin.getline(name,SIZE);
    //calculate the bill
    switch (package){
            case'A':
            case'a':{
                    bill=9.95;
                    if(vwdHrs>10)bill+=2*(vwdHrs-10);
                    break;
                }
            {
            case'B':
            case'b':{
                    bill=14.95;
                    if(vwdHrs>20)bill+=(vwdHrs-20);
                    break;
                }
            {    
            case'C':
            case'c':
                    bill=19.95;
                    break;}
                }
                
            default:cout<<"wrong Package Chosen"<<endl;                        
       };
    //output
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Customer Name "<<name<<endl;
    out<<"The package is "<<package<<endl;
    out<<"hours viewed "<<vwdHrs<<endl;
    out<<"your total amount is "<<"$"<<bill<<endl;
    //close the file
    out.close();
    return 0;
}
