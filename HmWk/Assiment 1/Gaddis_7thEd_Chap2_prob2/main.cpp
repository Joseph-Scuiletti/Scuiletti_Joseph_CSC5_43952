/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March 4, 2015, 9:46 AM
 *      Purpose: 4th homework problem
 */

#include <iostream>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here
int main() {
    //Declar the varibales
    float perct,comTotl,eCTotal;
    perct=.62;
    comTotl=4.6e7;
    //perct =the percentage for the East coust company which is 62%
    //comTotl is the amount the whol company genrated
    //eCTotal is the amout total from East Company division
    cout<<" This will determent the amout genrated for The East Coast division"<<endl;
    //Calculate
    eCTotal=perct*comTotl;
    //output
    cout<<"toal amout from East Coast Division is "<<"$"<<eCTotal<<endl;

    return 0;
}

