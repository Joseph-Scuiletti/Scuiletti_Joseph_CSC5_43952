/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on April 1, 2015, 8:01 AM
 *      Purpose: Busted Keypad
 */
//system libraries
#include <iostream>
using namespace std;

//user Libraries

//global constants

//function prototypes

//excution
int main(int argc, char** argv) {
//declkare variables
    unsigned short tAbove=999,tBelow=0,temp,posSet=0;
    cout<<"Iput a temperature from 0 to 999"<<endl;
    cin>>temp;
    //exhaust possible temptures
    for(int t100=0;t100<=9;t100++){
        for(int t10=0;t10<=9;t10++){
            for(int t1=0;t1<=9;t1++){
                if(t100==1||t10==1||t1==1)continue;
                if(t100==4||t10==4||t1==4)continue;
                if(t100==7||t10==7||t1==7)continue;
                posSet++;
                unsigned int tloop=t100*100+t10*10+t1;
                unsigned int tdiffA=tAbove-tloop;
                unsigned int tdiffB=temp-tloop;
                if((tdiffA>0)&&(tdiffA<(tAbove-temp)))tAbove=tloop;
                if((tdiffB>0)&&(tdiffB<(temp-tBelow)))tBelow=tloop;
            }
        }
    }
    //output the range of tempture settings
    cout<<"The input temperature = "<<temp<<" degrees"<<endl; 
    cout<<"The temp on the high side = "<<tAbove<<" degrees"<<endl;
    cout<<"the temp on the low side = "<<tBelow<<" degrees"<<endl;
    cout<<"There are a total of "<<posSet<<" temperature settings"<<endl;
    return 0;
}

