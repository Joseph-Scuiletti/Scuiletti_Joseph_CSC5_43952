/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March 4, 2015, 8:25 AM
 *      Purpose:2nd Homework
 */

//syestem Libraries
#include <iostream>
using namespace std;

//user Libaries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declared Varibales
    unsigned short nCust,nEDrnks,nCDrnks;
    unsigned char pEDrnks,pCDrnks;
    //assiagen Values
    nCust=16500;//nuber custmers
    pEDrnks=15;
    pCDrnks=58;
    //Process/Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
    //Output Everything
    cout<<"Number of custmers= "<<nCust<<endl;
    cout<<"Percent Energy Drinkers = "
                <<static_cast<int>(pEDrnks)<< "%" << endl; 
            cout<<"Number of citrust Drinkers/Energy Drinkers = "
               <<static_cast<int>(pCDrnks)<<"%" <<endl;
          cout<<"Number of energy drinker"<<nEDrnks<<endl;
          cout<<"number of citrus drinkers"<<nCDrnks<<endl;
    return 0;
}

