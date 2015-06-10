/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on May 22, 2015, 8:12 pm
 * Purpose:  Homework
 */

//System Libraries
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void beach();
void pretty();
void island();
void fight();
unsigned char randroll();
unsigned char roll(unsigned char,unsigned char);
void filAray(int [],int);
void prntAry(int [],int,int);
int linSrch(int[],int,int);
void markSrt(int [],int);

//Execution Begins Here!

int main(){
//Declare Variables
string choice;
char start;
int playHp=12;
int attack=randroll();
const int SIZE=100;
int array[SIZE];
int quit=0;
ofstream out;

//open file
//open the file
    out.open("help.dat");
//fill file
	out<<"//System Libraries"<<endl;
	out<<"//Global Constants"<<endl;
	out<<"//Function Prototypes"<<endl;
	out<<"//Function Prototypes"<<endl;
	out<<"//Execution Begins Here!"<<endl;
	out<<"//Declare Variables"<<endl;
	out<<"//Start the game"<<endl;
	out<<"//open file"<<endl;
	out<<"//fill file"<<endl;
	out<<"//close file"<<endl;
	out<<"//Initialize the random number seed"<<endl;
	out<<"//Fill the array"<<endl;
	out<<"//Sort the Array"<<endl;
	out<<"//ask player if he/she wants to play"<<endl;
	out<<"//Read the choice"<<endl;
	out<<"//begin or leave the game"<<endl;
	out<<"//give choice"<<endl;
	out<<"//do start"<<endl;
	out<<"//if choice is tes your might print array"<<endl;
	out<<"//Print array"<<endl;
	out<<"//Find something of attack value"<<endl;
	out<<"//do breaks if choice quit is used "<<endl;
	out<<"//subtract players atack from monsters health and monsters attack from players health"<<endl;
	out<<"This game is based on you moving through your enviorment and trying "<<endl;
	out<<"to deal with this worlds monsters. To navagate this world you must"<<endl;
	out<<"type in where to and a action word for example 'go south' or "<<endl;
	out<<"'run to beach' please no capital letters or 'the' befor the"<<endl;
	out<<" direction. to check you heath type in 'hit points'. to see a "<<endl;
	out<<"table of may be your attack and curent attack damage  type in'test your might'."<<endl;
	out<<"If you ever get lost type in 'look around' and the narrator will re describe "<<endl;
	out<<"the area.whenever you are fighting a monster your options are to 'attack' or 'heal'"<<endl;
	out<<"if you ever want to quit just type in 'quit' twice."<<endl;;
//close file
out.close();

//Initialize the random number seed
	srand(static_cast<unsigned int>(time(0)));

//Fill the array
    filAray(array,SIZE);
    //Sort the Array
    markSrt(array,SIZE);

//ask player if he/she wants to play
do{
cout<<"This is 'Project 2' the game where you adventre to slay monsters and such are you sure you want to play?(y or n(y for yes n for no))"<<endl;
//Read the choice
    cin>>start;
//begin or leave the game
    switch(start){
		  case 'y':{
cout<<"You start this adventure because you are bored and simply crazy. You are so "<<endl;
cout<<"crazy in fact, you hear a voice in your head(that'd be me).Today you deciced"<<endl;
cout<<"to vist a planet and kill monsters because you are a hero.Today you deciced"<<endl;
cout<<"When you were teleported on to the serface of this planet you see "<<endl;
cout<<"walls sournding you except to your south where you see a beach "<<endl;
cout<<"and feel a gust of salty air on your face. You swear with each gust of"<<endl;
cout<<"wind you hear a angry cuban yell if you dont know how to play"<<endl;
cout<<"type '/help' for instructions"<<endl;

do{
getline(cin,choice);//give choice
if(choice=="run east"||"run west"||"run north"){
	cout<<"After smashing your face into that wall you realise the handsome voice in your"<<endl;
	cout<<"head has already told you that wall was there"<<endl;}
if(choice=="go west"||"walk west"||"go north"||"walk north"||"go east"||"walk east"){
	cout<<"theres a wall silly"<<endl;}
if(choice=="walk south"||"go to beach"||"run south"||"run to beach"||"go south"||"walk to beach"){
	beach();


if(choice=="run"||"walk"||"go"){
		cout<<" where to?"<<endl;}
if(choice=="hit points"){
	cout<<" your health is "<<playHp<<endl;}
if(choice=="/help"){
	cout<<"This game is based on you moving through your enviorment and trying "<<endl;
	cout<<"to deal with this worlds monsters. To navagate this world you must"<<endl;
	cout<<"type in where to and a action word for example 'go south' or "<<endl;
	cout<<"'run to beach' please no capital letters or 'the' befor the"<<endl;
	cout<<" direction. to check you heath type in 'hit points'. to see a "<<endl;
	cout<<"table of may be your attack and curent attack damage  type in'test your might'."<<endl;
	cout<<"If you ever get lost type in 'look around' and the narrator will re describe "<<endl;
	cout<<"the area.whenever you are fighting a monster your options are to 'attack' or 'heal'"<<endl;
	cout<<"if you ever want to quit just type in 'quit' twice."<<endl;}
if(choice=="test your might "){
	//Print again
    prntAry(array,SIZE,10);
    //Find something
    int rndVal=attack;
    cout<<rndVal<<" was found at position "
        <<linSrch(array,SIZE,rndVal)<<endl;}
if(choice=="quit"){//do breaks if choice quit is used or tolded to moved
	cout<<" Thanks for playing. Hope you had fun! "<<endl;
	quit++;}
if(choice=="look around"){
cout<<"You start this adventure because you are bored and simply crazy. You are so "<<endl;
cout<<"crazy in fact you hear a voice in your head(that be me).Today you deciced"<<endl;
cout<<"to vist a planet and kill monsters because you are a hero.Today you deciced"<<endl;
cout<<"When you were teleported on to the serface of this planet you see "<<endl;
cout<<"walls sournding you ecept to your south where you see a beach "<<endl;
cout<<"and feel a gust of salt air on your face. You swear with each gust of"<<endl;
cout<<"wind you hear a angry cuban yell if you dont know how to play"<<endl;}
cout<<"type '/help' for instructions"<<endl;}
		}while(quit==0);
break;
}
	  case 'n':{
	  	cout<<"Thank you and hope you had fun."<<endl;
	  break;
	  }
	  default:{
	                      cout<<"Exit?"<<endl;
	              }
	      };
	          }while(start>='y'&&start<='n');

 return 0;
}

unsigned char randroll(){

    return rand() % 12 + 1;
}

int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}

void markSrt(int a[],int n){
    for(int pos=0;pos<n-1;pos++){
        for(int lst=pos+1;lst<n;lst++){
            if(a[pos]>a[lst]){
                int temp=a[pos];
                a[pos]=a[lst];
                a[lst]=temp;
            }
        }
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(3)<<a[i];
        if(i%perLine==perLine-1)cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%12+1;//2 digit numbers
    }
}

void beach(){
string choice;
int playHp=12;
int attack=randroll();
const int SIZE=100;
int array[SIZE];
int quit=0;
cout<<"when you arive on the beach a wall erected behind you.So contounnuing on you see "<<endl;
cout<<"it sreaches to the east,it sreaches to the east, but to the west there is a steep unclimable cliff."<<endl;
cout<<"To the south you see a boat that will take you to a island in the distance"<<endl;
do{
	getline(cin,choice);
	if(choice=="go north"){
			cout<<"theres a wall though"<<endl;}
	if(choice=="walk north"){
			cout<<"ha did you see that you walked stright into that wall man that was funy"<<endl;}
	if(choice=="run north"){
			cout<<"wait speedy, calm down there is a wall"<<endl;}
	if(choice=="go east"||"walk east"||"run east"){
		pretty();}
	if(choice=="walk west"||"run west"||"go west"){
				cout<<"unless gravity does not affect you I dont think you can."<<endl;}
	if(choice=="walk south"||"go to boat"||"run south"||"walk to boat"||"walk to boat"){
			island();}
	if(choice=="look around"){
		cout<<"when you arive on the beach a wall erected behind you.So contounnuing on you see "<<endl;
		cout<<"it sreaches to the east,it sreaches to the east, but to the west there is a steep unclimable cliff."<<endl;
		cout<<"To the south you see a boat that will take you to a island in the distance"<<endl;}
	if(choice=="run"||"walk"||"go"){
		cout<<" where to?"<<endl;}
if(choice=="hit points"){
	cout<<" your health is "<<playHp<<endl;}
if(choice=="/help"){
	cout<<"This game is based on you moving through your enviorment and trying "<<endl;
	cout<<"to deal with this worlds monsters. To navagate this world you must"<<endl;
	cout<<"type in where to and a action word for example 'go south' or "<<endl;
	cout<<"'run to beach' please no capital letters or 'the' befor the"<<endl;
	cout<<" direction. to check you heath type in 'hit points'. to see a "<<endl;
	cout<<"table of may be your attack and curent attack damage  type in'test your might'."<<endl;
	cout<<"If you ever get lost type in 'look around' and the narrator will re describe "<<endl;
	cout<<"the area.whenever you are fighting a monster your options are to 'attack' or 'heal'"<<endl;
	cout<<"if you ever want to quit just type in 'quit' twice."<<endl;}
if(choice=="test your might "){
	//Print again
    prntAry(array,SIZE,10);
    //Find something
    int rndVal=attack;
    cout<<rndVal<<" was found at position "
        <<linSrch(array,SIZE,rndVal)<<endl;}
if(choice=="quit"){
	cout<<" Thanks for playing. Hope you had fun! "<<endl;
	quit++;}
		}while(quit==0);
		}

void pretty(){
	string choice;
	int playHp=12;
	int attack=randroll();
	const int SIZE=100;
	int array[SIZE];
int quit=0;
	cout<<"what a beautiful area of this beach if only you can stay forever"<<endl;
	cout<<" ,oh well go west to get back to the grind"<<endl;
	do{
		getline(cin,choice);
	if(choice=="go west"||"walk west"||"run west"){
		beach();}
	if(choice=="stay here forever"){
	cout<<"You lived in this beach untill you died knowing you did nothing with your life because of a beautiful beach."<<endl;}
	if(choice=="look around"){
	cout<<"what a beautiful area of this beach if only you can stay forever, oh well back to the grind"<<endl;}
	if(choice=="run"||"walk"||"go"){
			cout<<" where to?"<<endl;}
	if(choice=="hit points"){
		cout<<" your health is "<<playHp<<endl;}
	if(choice=="/help"){
		cout<<"This game is based on you moving through your enviorment and trying "<<endl;
		cout<<"to deal with this worlds monsters. To navagate this world you must"<<endl;
		cout<<"type in where to and a action word for example 'go south' or "<<endl;
		cout<<"'run to beach' please no capital letters or 'the' befor the"<<endl;
		cout<<" direction. to check you heath type in 'hit points'. to see a "<<endl;
		cout<<"table of may be your attack and curent attack damage  type in'test your might'."<<endl;
		cout<<"If you ever get lost type in 'look around' and the narrator will re describe "<<endl;
		cout<<"the area.whenever you are fighting a monster your options are to 'attack' or 'heal'"<<endl;
		cout<<"if you ever want to quit just type in 'quit' twice."<<endl;}
	if(choice=="test your might "){
		//Print again
	    prntAry(array,SIZE,10);
	    //Find something
	    int rndVal=attack;
	    cout<<rndVal<<" was found at position "
	        <<linSrch(array,SIZE,rndVal)<<endl;}
	if(choice=="quit"){//do breaks if choice quit is used or tolded to moved
		cout<<" Thanks for playing. Hope you had fun! "<<endl;
		quit++;}
		}while(quit==0);
	}



void island(){
	string choice;
	int playHp=12;
	int attack=randroll();
	const int SIZE=100;
	int array[SIZE];
int quit=0;
	cout<<"when you arive on the boat you see the monster"<<endl;
	cout<<"to the south and it is the only way to go"<<endl;
do{
		getline(cin,choice);
	if(choice=="go south"||"walk south"||"run south"||"go to monster"||"walk to monster"||"run to monster"){
		fight();}
	if(choice=="walk west"||"run west"||"go west"||"go north"||"walk north"||"run north"||"go z"||"walk north"||"run north"){
		cout<<"You lived in this beach untill you died knowing you did nothing with your life because of a beautiful beach."<<endl;}
	if(choice=="look around"){
		cout<<"when you arive on the boat you see the monster"<<endl;
		cout<<"to the south and it is the only way to go"<<endl;}
		if(choice=="run"||"walk"||"go"){
					cout<<" where to?"<<endl;}
			if(choice=="hit points"){
				cout<<" your health is "<<playHp<<endl;}
			if(choice=="/help"){
				cout<<"This game is based on you moving through your enviorment and trying "<<endl;
				cout<<"to deal with this worlds monsters. To navagate this world you must"<<endl;
				cout<<"type in where to and a action word for example 'go south' or "<<endl;
				cout<<"'run to beach' please no capital letters or 'the' befor the"<<endl;
				cout<<" direction. to check you heath type in 'hit points'. to see a "<<endl;
				cout<<"table of may be your attack and curent attack damage  type in'test your might'."<<endl;
				cout<<"If you ever get lost type in 'look around' and the narrator will re describe "<<endl;
				cout<<"the area.whenever you are fighting a monster your options are to 'attack' or 'heal'"<<endl;
				cout<<"if you ever want to quit just type in 'quit' twice."<<endl;}
			if(choice=="test your might "){
				//Print again
			    prntAry(array,SIZE,10);
			    //Find something
			    int rndVal=attack;
			    cout<<rndVal<<" was found at position "
			        <<linSrch(array,SIZE,rndVal)<<endl;}
			if(choice=="quit"){//do breaks if choice quit is used or tolded to moved
				cout<<" Thanks for playing. Hope you had fun! "<<endl;
				quit++;}
		}while(quit==0);
}



void fight(){
	string choice;
	int playHp=12;
	int attack=randroll();
	int monHp=15;
	int monAtt=6;
	int quit=0;
cout<<"some how you maniged to sneak up on this monster which looks to be"<<endl;
cout<<"some kind of dragon(note you can only 'heal' or 'attack')"<<endl;
do{
getline(cin,choice);
if(choice=="heal"){
	playHp++;
cout<<" you put bandages around your wounds"<<endl;}
if(choice=="attack"){
cout<<"you did "<<attack<<" on the dragon while it did "<<monAtt<<" to you"<<endl;
playHp+=-monAtt;
monHp+=-attack;//subtract players atack from monsters health and monsters attack from players health
monAtt++;}
if(playHp<0){
	cout<<"you died how did you do that oh well try again later"<<endl;}
if(monHp<0){
	cout<<"Look you killed it good job it did nothing and you murdered it how do you feel,"<<endl;
	cout<<"I hope its good becaause you won! yyaaayy! now go away!"<<endl;}
	quit++;
}while(quit==0);
}