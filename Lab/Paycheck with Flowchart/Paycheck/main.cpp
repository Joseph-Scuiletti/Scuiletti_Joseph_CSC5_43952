/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 *
 * Created on February 23, 2015, 9:55 AM
 *      Purpose: Input/Process/Output and
 *                      Flowchart
 */
//System Libraries
#include <cstdlib>//I/O Libary
#include <iostream>
using namespace std;//I/O Library under std namespace

//User Libraries

//global Constants

//Function Prototypes

//Execution Begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    //Inputs:
    //  PayRate -> $'s/hr
    //  hrsWrkd -> hrs
    //Output:
    //  Gross Pay Check Amount = payChk -> $'s
    float payRate,hrsWrkd,payChk;
    //Prompt the user for input
    cout<<"This program calculates your Gross Paycheck."<<endl;
    cout<<"Input your Pay Rate as $xx.xx, provide the x's"<<endl;
    cin>>payRate;
    cout<<"input your Hours Worked this pay period."<<endl;
    cout<<"Format xx, provide the x"<<endl;
    cin>>hrsWrkd;
    //Calculate the paycheck
    payChk=payRate*hrsWrkd;
    //Output the results
    cout<<"$"<<payChk<<" = $"<<payRate<<"/hr * "<<hrsWrkd<<"hrs"<<endl;
    //Exit stage right
            
    
    
    return 0;
}

