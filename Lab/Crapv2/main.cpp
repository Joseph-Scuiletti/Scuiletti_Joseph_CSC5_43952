/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on May 4, 2015, 8:03 AM
 *      Purpose: check out dice statistics
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char,unsigned char);

//Execution begins here!
int main() {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    const int SIZE=13;
    int win[SIZE]={},int lose[SIZE]={}, int nThrows[SIZE]={};
    int nGames=36000,thwGame=0,maxNThw=0;
    //Loop on the games and take stats
    for(int game=1;game<=nGames;game++){
        int sum=roll(2,6);
        nThrows[sum]++;
        thwGame=1;
        if(sum==2||sum==3||sum==12)lose[sum]++;
        else if(sum==7||sum==11)win[sum]++;
        else{
            //Keep throwing
            bool rollAgn;
            do{
                rollAgn=true;
                int sum2=roll(2,6);
                nThrows[sum]++;
                thwGame++;
                if(sum2==sum){
                    win[sum]++;
                    rollAgn=false;
                }else if(sum2==7){
                    lose[sum]++;
                    rollAgn=false;
                }
            }while(rollAgn);
            if(thwGame>maxNThw)maxNThw=thwGame;
        }
    }
    //Output wins and losses
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<" Sum Win Loss Total   %Win  %loss  Avg Throw"<<endl;
    for(int sindx=2;sindx<SIZE;sindx++){
        cout<<setw(2)<<sindx;
        cout<<setw(5)<<win[sindx];
        cout<<setw(5)<<lose[sindx];
        cout<<setw(5)<<win+lose[sindx]<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<setw(5)<<100.0f*win[sindx]/(win+lose[sindx])<<"%"<<endl;
        cout<<setw(5)<<100.0f*lose[sindx]/(win+lose[sindx])<<"%"<<endl;
        cout<<setw(5)<<nThrows[sindx]<<endl;
        cout<<setw(5)<<1.0f*nThrows[sindx]/(win+lose[sindx])[sindx]<<endl;
    }
    cout<<"Max throws in any game= "<<maxNThw<<endl;
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
