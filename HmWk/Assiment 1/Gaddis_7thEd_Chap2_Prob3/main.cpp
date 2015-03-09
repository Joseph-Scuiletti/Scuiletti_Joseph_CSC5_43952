/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March,8,2015,9:05 PM
 *      Purpose:Homework
 */

#include <iostream>
using namespace std;

//Global Constant

//User Libraries

//Function Prototypes

//Excution Begins here

int main() {
	float charge,sTax,cTax,tax,total;
	cTax=.02;
	sTax=.04;
	cout<<" This will creat a sales bill "<< endl;
	cout<<" Format $XX.XX as the charge"<< endl;
	cin>>charge;
	//calculate for total sales with tax
	cout<< " Calculating total amount "<<endl;
	tax=charge*(sTax+cTax);
	total=charge+tax;
	//output
	cout<<" Charge   "<<"$"<<charge<<endl;
	cout<<" County Tax   "<<cTax*100<<"%"<<endl;
	cout<<" State Tax   "<<sTax*100<<"%"<<endl;
	cout<<" Total Tax    "<<"$"<<tax<<endl;
	cout<<" Total Bill   "<<"$"<<total<< endl;
//Joe goes

    return 0;
}

