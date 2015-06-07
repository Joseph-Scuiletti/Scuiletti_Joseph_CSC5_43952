/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on May 22, 2015, 8:12 pm
 * Purpose:  Homework
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void beach();
void island();
void beautiful();
void inksCave();
void cliff();
void forest();
void desert();
void pyrimid();
void door();
void grindField();
void burntForest();

//Execution Begins Here!

int main(){
//Declare Variables
string choice;
int playHp=12;
int monHp=12;
int attack=6;
int quit=0;

//Start the game
//load the game
//open file
//close file

cout<<"You start this adventure because you are bored and simply crazy. You are so "<<endl;
cout<<"crazy in fact you hear a voice in your head(that be me).Today you deciced"<<endl;
cout<<"to vist a planet and kill monsters because you are a hero.Today you deciced"<<endl;
cout<<"When you were teleported on to the serface of this planet you see "<<endl;
cout<<"walls sournding you ecept to your south where you see a beach "<<endl;
cout<<"and feel a gust of salt air on your face. You swear with each gust of"<<endl;
cout<<"wind you hear a angry cuban yell if you dont know how to play"<<endl;
cout<<"type '/help' for instructions"<<endl;
do{
getline(cin,choice);
if(choice=="go north"){
	cout<<"thers a door silly"<<endl;}
if(choice=="walk north"){
	cout<<"thers a door silly"<<endl;}
if(choice=="run north"){
	cout<<"After smashing your face into that wall you relise the handsome voice in your"<<endl;
	cout<<"head has already told you that wall was there"<<endl;}
if(choice=="go east"){
	cout<<"thers a door silly"<<endl;}
if(choice=="walk east"){
	cout<<"thers a door silly"<<endl;}
if(choice=="run east"){
	cout<<"After smashing your face into that wall you relise the handsome voice in your"<<endl;
	cout<<"head has already told you that wall was there"<<endl;}
if(choice=="go west"){
	cout<<"thers a door silly"<<endl;}
if(choice=="walk west"){
	cout<<"thers a door silly"<<endl;}
if(choice=="run west"){
	cout<<"After smashing your face into that wall you relise the handsome voice in your"<<endl;
	cout<<"head has already told you that wall was there"<<endl;}
if(choice=="go south"){
	beach();}
if(choice=="walk south"){
	beach();}
if(choice=="go to beach"){
	beach();}
if(choice=="run south"){
	beach();}
if(choice=="run to beach"){
	beach();}
if(choice=="run"){
		cout<<" where to?"<<endl;}
if(choice=="walk"){
		cout<<" where to?"<<endl;}
if(choice=="go"){
		cout<<" where to?"<<endl;}
if(choice=="hit points"){
	cout<<" your health is "<<playHp<<endl;}
if(choice=="/help"){
	cout<<"This game is based on you moving through your enviorment and trying "<<endl;
	cout<<"to deal with this worlds monsters. To navagate this world you must"<<endl;
	cout<<"type in where to and to do do that you must use a actiion word and direction"<<endl;
	cout<<"for example 'go south' or 'run to beach' please no capital letters or 'the'"<<endl;
	cout<<"befor the direction. to check you heath type in 'hit points'. to see how "<<endl;
	cout<<"much your attack may do type in'test your might'.If you ever get lost "<<endl;
	cout<<"please type in 'look around' and your kind narrator will re describe "<<endl;
	cout<<"the area. if you ever want to quit just type in 'quit'."<<endl;
	}
if(choice=="test your might"){
	cout<<"your attack is "<<attack<<endl;}
if(choice=="mon"){
	cout<<" The monster hp is "<<monHp<<endl; }
if(choice=="quit"){
	cout<<" Thanks for playing. Hope you had fun! "<<endl;}
if(choice=="look"){
cout<<"You start this adventure because you are bored and simply crazy. You are so "<<endl;
cout<<"crazy in fact you hear a voice in your head(that be me).Today you deciced"<<endl;
cout<<"to vist a planet and kill monsters because you are a hero.Today you deciced"<<endl;
cout<<"When you were teleported on to the serface of this planet you see "<<endl;
cout<<"walls sournding you ecept to your south where you see a beach "<<endl;
cout<<"and feel a gust of salt air on your face. You swear with each gust of"<<endl;
cout<<"wind you hear a angry cuban yell if you dont know how to play"<<endl;
cout<<"type '/help' for instructions"<<endl;}
	}while(quit==0);
 return 0;
}


void beach(){
	cout<<"when you arive on the beach you see it sreaches to the east and west and to the south you see a boat that will take you to a island in the distance"<<endl;
}
void island(){
}
void beautiful(){
}
void inksCave(){
}
void cliff(){
}
void forest(){
}
void desert(){
}
void pyrimid(){
}
void door(){
}
void grindField(){
}
void burntForest(){
}