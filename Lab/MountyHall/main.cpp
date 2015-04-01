/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on April 1, 2015, 8:01 AM
 *      Purpose: play the monty hall game
 *              analyze staying with your first door choice or changing to the other door
 */
//system libraries
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

//user Libraries

//global constants

//function prototypes

//excution
int main(int argc, char** argv) {
    //set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    unsigned int nGames,win=0,loss=0;
    char stay;
    unsigned int door,doorOpn,prize,othDoor;
    //prompt user for inputs
    cout<<"Thjis is the Mounty Hall Game, Let's make a deal "<<endl;
    cout<<"how many games would you like to paly (1-4*10^9)"<<endl;
    cin>>nGames;
    cout<<"are you going to stay if given the opportunity type s for stay"<<endl;
    cout<<"Type anything eles to shoose the other door"<<endl;
    cin>>stay;
    //loop for all the games
    for(int game=1;game<=nGames;game++){
        //randomly choose your door
        door=rand()%3+1;        
        //the prize cannot be behind the door that is open
        prize=rand()%3+1;       
        //Randomly choose the door to open
        do{
                doorOpn=rand()%3+1;
        }while(door==doorOpn||prize==doorOpn);//cant be the same
        //what is the other door
         //Randomly choose the door to open
        do{
                othDoor=rand()%3+1;
        }while(othDoor==doorOpn||othDoor==door);//cant be the same
        
        //swap the doors if given the opportunity
        if(stay!='S'&& stay!='s'){
        door=othDoor;
        }
        //now statistally count how many wins and losses
         if(door==prize)win++;
         else loss++;
    }
    //output the reults
    cout<<"Out of "<<nGames<<" Played"<<endl;
    if(stay=='S'||stay=='s')cout<<"I am not changing my door and "<<endl;
    else cout<<"I am changing my door and "<<endl;
    cout<<"I win -> "<<win<<" times -> "<<100.0f*win/nGames<<"%"<<endl;   
    cout<<"Vs losing "<<loss<<" times!"<<100.0f*loss/nGames<<"%"<<endl;
    
    return 0;
}

