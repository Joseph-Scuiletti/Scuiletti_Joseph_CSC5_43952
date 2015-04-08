/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 8, 2015, 10:34 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//declare varibles 
    float memShip=2500,fee=.04;
    float year,totlfee;
    cout<<"Gaddis 7th Edition chapter5 problem 5"<<endl;
    cout<<" this will determin the membership cost after the first year"<<endl;
    cout<<"which is 2500 when first starting so"<<endl;
    //loop
    for(year=1;year<=6;year++){
       totlfee=memShip*(fee*year);
       totlfee+=+memShip;
       cout<<"after "<<year<<" year the membership will cost "<<totlfee<<endl;
    }
    
    return 0;
}

