/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on April 8, 2015, 9:48 AM
 *      Purpose: to do homework
 */

//System Libraries 
#include <iostream>
using namespace std;

//user Libraries

//Global Constants

//function prototypes

//Exaction
int main(int argc, char** argv) {
//declare variables
    float cal=3.9,min,totlCal;    
    cout<<"Gaddis 7th edition chapter 5 problem 4"<<endl;
    cout<<"this will determine how much calrories you will burn running on a treamill fo 10,15,20,25,30 minutes"<<endl;
    //looop
    for(min=10;min<=30;min+=+5){
        //output
        totlCal=min*cal;
        cout<<"If you ran "<<min<<" minutes you would burn "<<totlCal<<" calories"<<endl;
    }
        
    return 0;
}

