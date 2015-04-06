/* 
 * File:   main.cpp
 * Author:Joseph Scuiletti 
 * Created on April 6, 2015, 10:22 AM
 *      purpose: to accomplish homework
 */

#include <iostream>
using namespace std;

//Global constant

//user Libraries

//function prototypes


//excution begins here
int main(int argc, char** argv) {
//declare variable
    int yearpas;
    float ocenlv,riselv=1.5;
    char start;
    //input 
   cout<<"this problem will work out how much the ocean will rise after 25 years"<<endl; 
   cout<<"the ocean will rise  1.5 millimetters each year"<<endl; //describe problem
   cout<<"hit any chater to see chart for the ocean levels for the next 25 years"<<endl;
   cin>>start;
   //loop  
    for(yearpas=1;yearpas<=25;yearpas++){
        ocenlv=riselv*yearpas;
    cout<<"after "<<yearpas<<" year the ocean has risin "<<ocenlv<<" millimeters"<<endl;
    }
   
    return 0;
}

