/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March,17,2015,11:47 PM
 *      Purpose:
 */

#include <iostream>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here

int main(){
//declare vriables
float cookie,serve,calorie,ttalcal;
//input
cout<<"input the amount of cookies you have consumed to calculate total calories eaten"<<endl;
cin>>cookie; //for the cookie amount
//calculate
serve=4; //the serving size
calorie=300; //the serving size
ttalcal=(cookie/serve)*calorie;
//output
cout<<"you have consumed "<<ttalcal<<" calories"<<endl;


    return 0;
}

