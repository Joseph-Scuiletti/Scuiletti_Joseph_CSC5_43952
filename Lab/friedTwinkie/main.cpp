/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on April 8, 2015, 8:01 AM
 *      Purpose:to gain weight, become a publice health
 *      hazard,
 */

#include <iostream>
#include<string.h>
#include<iomanip>
using namespace std;


int main(int argc, char** argv) {
    const int SIZE=80;
    char input[SIZE]="";
    unsigned short totChng=0,pTwke=350;
    char nQtrs,nDimes,nNikels;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"THis is a fried teinkie machine"<<endl;
    cout<<"fried teinkies cost 3.50"<<endl;
    cout<<"input your change as "<<endl;
    cout<<"dollar, Quarter, dime, nickels"<<endl;
    
     do{
            cout<<"Input coins/change"<<endl;
            cin>>input;
            if(strcmp(input,"Dollar")==0){
                totChng+=100;
            }else if (strcmp(input,"Quartere")==0){
                totChng+=25;       
            }else if (strcmp(input,"Dime")==0){
                totChng+=10;
            }else if (strcmp(input,"Nickel")==0){
                totChng+=5;
            }else{
            cout<<"no slugs Allowed"<<endl;
            }
        }while (totChng<pTwke);
    //give twinkie
    cout<<endl<<"here is your fried Twinkie"<<endl;
    //caculate change
    totChng-=pTwke;
    cout<<"Your change is = $"<<totChng/100.0f<<endl;
    //how many quarters
    nQtrs=totChng/25;
    if(nQtrs>0)cout<<static_cast<int>(nQtrs)<<" Quarter Change"<<endl;
    //how many dimes
    totChng-=nQtrs*25;
    nDimes=totChng/1.0;
    if(nDimes>0)cout<<static_cast<int>(nDimes)<<" Dimes change"<<endl;
    //how many nickels
    totChng-=nDimes*10;
    nNikels=totChng/5;
    if(nNikels>0)cout<<static_cast<int>(nNikels)<<" Nikels change"<<endl;
//exit           
    return 0;
}

