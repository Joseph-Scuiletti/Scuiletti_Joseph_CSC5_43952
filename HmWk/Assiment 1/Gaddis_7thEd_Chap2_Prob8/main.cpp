/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on Month Day, Year, Time AM/PM
 *      Purpose:
 */

#include <iostream>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here

int main() {
//declares varable
float iteam1,iteam2,iteam3,iteam4,iteam5, saleTax,total,tax,sum;
iteam1=12.95;
iteam2=24.95;
iteam3=6.95;
iteam4=14.95;
iteam5=3.95;
saleTax=.06;
cout<<" This program will caculate the prces of the five iteams wich are 12.95,24.95,6.95,14.95,3.95"<<endl;
cout<<"first to calculate the sales tax"<<endl;
//caculate
sum=iteam1+iteam2+iteam3+iteam4+iteam5;
tax=sum*saleTax;
total=sum+tax;
cout<<"The Sales Tax is "<<"$"<<tax<<endl;
cout<<"The Subtotal is "<<"$"<<sum<<endl;
cout<<"The Total is "<<"$"<<total<<endl;
    return 0;
}

