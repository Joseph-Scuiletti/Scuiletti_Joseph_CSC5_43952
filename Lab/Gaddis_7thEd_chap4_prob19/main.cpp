/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March 25, 2015, 10:44 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//user Libraries

//global constants

//function prototypes

int main(int argc, char** argv) {
//declare varibals
    float dist;
    float speed;
    float time;
    char gas;
    float bill;
    //promt the users for input
    cout<<"How many long did the instmaint take to detect the sound"<<endl;
    cin>>time;
    cout<<"What is your package A,B,C"<<endl;
    cin>>gas;
  
    //calculate the bill
    switch (gas){
            case'1':
            {
                    speed=9.95;
                    if(vwdHrs>10)bill+=2*(vwdHrs-10);
                    break;
                }
            {
            case'2':
            {
                    speed=14.95;
                    if(vwdHrs>20)bill+=(vwdHrs-20);
                    break;
                }
            {    
            case'3':
            
                    speed=19.95;
                    break;}
                {
                 case'4':
            
                    speed=19.95;
                    break;}
                    
            default:cout<<"wrong gas Chosen"<<endl;                        
       };
       //csculate the distance
       dist=speed*time;
    //output
    out<<fixed<<setprecision(1)<<showpoint;
    out<<"Customer Name "<<name<<endl;
    out<<"The package is "<<package<<endl;
    out<<"hours viewed "<<vwdHrs<<endl;
    out<<"your total amount is "<<"$"<<bill<<endl;
    //close the file
    return 0;
}
