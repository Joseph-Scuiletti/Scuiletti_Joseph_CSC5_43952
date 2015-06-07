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
cout<<"test"<<endl;
do{
getline(cin,choice);
if(choice=="walk north"){
	cout<<"thers a door silly"<<endl;}
if(choice=="run north"){
	cout<<"After smashing your face into that wall you relise the handsome voice in your"<<endl;
	cout<<"head has already told you that wall was there"<<endl;}
if(choice=="walk east"){
	cout<<"thers a door silly"<<endl;}
if(choice=="run east"){
	cout<<"After smashing your face into that wall you relise the handsome voice in your"<<endl;
	cout<<"head has already told you that wall was there"<<endl;}
if(choice=="walk west"){
	cout<<"thers a door silly"<<endl;}
if(choice=="run west"){
	cout<<"After smashing your face into that wall you relise the handsome voice in your"<<endl;
	cout<<"head has already told you that wall was there"<<endl;}
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
if(choice=="Hit points"){
	cout<<" your health is "<<playHp<<endl;}
if(choice=="/help"){
	cout<<"  "<<endl;}
if(choice=="test your might"){
	cout<<"your attack is "<<attack<<endl;}
if(choice=="mon"){
	cout<<" The monster hp is "<<monHp<<endl; }
if(choice=="quit"){
	cout<<" Thanks for playing. Hope you had fun! "<<endl;
	quit++;}
	}while(quit==0);
 return 0;
}


void beach(){
	cout<<"this work 1000% fine"<<endl;
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