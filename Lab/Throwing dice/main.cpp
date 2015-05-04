/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on May 4, 2015, 7:49 AM
 *      Purpose: to throw some dice
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char,unsigned char);

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=15;//Size larger than needed
    int freq[SIZE]={};//Setting whole array to 0
    unsigned int nThrows=36000;//Number of Throws
    unsigned int sum=0;//Add up all the times thrown
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Loop, throw the dice take the stats!
    for(unsigned int throws=1;throws<=nThrows;throws++){
        freq[roll(2,6)]++;
    }
    //Print the results
    for(int value=0;value<SIZE;value++){
        sum+=freq[value];
        cout<<value<<" was thrown "
            <<freq[value]<<" times!"<<endl;
    }
    cout<<"The dice were thrown "<<nThrows
        <<"="<<sum<<" times"<<endl;
    //Exit stage right
    return 0;
}

unsigned char roll(unsigned char nDie,unsigned char sides){
    unsigned char sum=0;
    for(int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}

