/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March 8,2015,11:34PM
 *      Purpose:Homework
 */

#include <iostream>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here

int main() {
	//Declare variables
	float iteam1,iteam2,iteam3,iteam4,iteam5,saleTax,tax,sum,total;
	iteam1=12.95;
	iteam2=24.95;
	iteam3=6.95;
	iteam4=14.95;
	iteam5=3.95;
	saleTax=.06;
	cout<<"This will cacllate the price of $12.95,$24.95,$6.95,$14.95,$3.95"<<endl;
	//calculate
	sum=iteam1+iteam2+iteam3+iteam4+iteam5;
	tax=sum*saleTax;
	total=sum+tax;
	cout<<"calculating Tax"<<endl;
	cout<<"the Sale Tax is "<<"$"<<tax<<endl;
	//output
	cout<<" The subtotal is "<<"$"<<sum<<endl;
	cout<<" The Total Amount it "<<"$"<<total<<endl;

    return 0;
}

