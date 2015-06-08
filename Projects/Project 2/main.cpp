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
void pretty();
void fight();
;

//Execution Begins Here!

int main(){
//Declare Variables
string choice;
int playHp=12;
int attack=6;
int quit=0;

//Start the game
//load the game
//open file
//close file

cout<<"You start this adventure because you are bored and simply crazy. You are so "<<endl;
cout<<"crazy in fact, you hear a voice in your head(that'd be me).Today you deciced"<<endl;
cout<<"to vist a planet and kill monsters because you are a hero.Today you deciced"<<endl;
cout<<"When you were teleported on to the serface of this planet you see "<<endl;
cout<<"walls sournding you except to your south where you see a beach "<<endl;
cout<<"and feel a gust of salty air on your face. You swear with each gust of"<<endl;
cout<<"wind you hear a angry cuban yell if you dont know how to play"<<endl;
cout<<"type '/help' for instructions"<<endl;
do{
getline(cin,choice);
if(choice=="go north"){
	cout<<"theres a wall silly"<<endl;}
if(choice=="walk north"){
	cout<<"thers a wall silly"<<endl;}
if(choice=="run north"){
	cout<<"After smashing your face into that wall you realise the handsome voice in your"<<endl;
	cout<<"head has already told you that wall was there"<<endl;}
if(choice=="go east"){
	cout<<"theres a wall silly"<<endl;}
if(choice=="walk east"){
	cout<<"thers a wall silly"<<endl;}
if(choice=="run east"){
	cout<<"After smashing your face into that wall you realise the handsome voice in your"<<endl;
	cout<<"head has already told you that wall was there"<<endl;}
if(choice=="go west"){
	cout<<"theres a wall silly"<<endl;}
if(choice=="walk west"){
	cout<<"theres a wall silly"<<endl;}
if(choice=="run west"){
	cout<<"After smashing your face into that wall you realise the handsome voice in your"<<endl;
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
	cout<<"the area.whenever you are fighting a monster your options are to 'attack' or 'run'"<<endl;
	cout<<"if you ever want to quit just type in 'quit'."<<endl;

	}
if(choice=="test your might"){
	cout<<"your attack is "<<attack<<endl;}
if(choice=="quit"){
	cout<<" Thanks for playing. Hope you had fun! "<<endl;
	quit++;}
if(choice=="look around"){
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
	int playHp=12;
	int attack=6;
	int quit=0;
	string choice;
	cout<<"when you arive on the beach a wall erected behind you.So contounnuing on you see it sreaches to the east,"<<endl;
	cout<<"but to the west there is a steep unclimable cliff."<<endl;
	cout<<"To the south you see a boat that will take you to a island in the distance"<<endl;
	do{
	getline(cin,choice);
	if(choice=="go north"){
			cout<<"theres a wall though"<<endl;}
	if(choice=="walk north"){
			cout<<"ha did you see that you walked stright into that wall man that was funy"<<endl;}
	if(choice=="run north"){
			cout<<"wha speedy calm down there is a wall"<<endl;}
	if(choice=="go east"){
			pretty();}
	if(choice=="walk east"){
			pretty();}
	if(choice=="run east"){
			pretty();}
	if(choice=="go west"){
			cout<<"I belive there is a wall"<<endl;;}
	if(choice=="walk wast"){
			cout<<"unless gravity does not affect you I dont think you can."<<endl;}
	if(choice=="run west"){
			cout<<"If you think you can run up a almost vertical cliff be my guest but I am not going to whach"<<endl;}
	if(choice=="go south"){
		island();}
	if(choice=="walk south"){
		island();}
	if(choice=="go to boat"){
		island();}
	if(choice=="run south"){
		island();}
	if(choice=="run to boat"){
		beach();}
		if(choice=="walk to boat"){
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
		cout<<"the area.whenever you are fighting a monster your options are to 'attack' or 'run'"<<endl;
		cout<<"if you ever want to quit just type in 'quit'."<<endl;
		}
	if(choice=="test your might"){
		cout<<"your attack is "<<attack<<endl;}
	if(choice=="quit"){
		cout<<" Thanks for playing. Hope you had fun! "<<endl;
		quit++;}
	if(choice=="look around"){
	cout<<"when you arive on the beach a wall erected behind you.So contounnuing on you see it sreaches to the east,"<<endl;
	cout<<"but to the west there is a steep unclimable cliff."<<endl;
	cout<<"To the south you see a boat that will take you to a island in the distance"<<endl;}
	}while(quit==0);
}
void island(){
	int playHp=12;
	int attack=6;
	int quit=0;
	string choice;
	cout<<"when you arive on to the island you see a monster in the distance. At this point yo csn go south after the monster or back  north to the beach"<<endl;
	do{
	getline(cin,choice);
	if(choice=="go north"){
		beach();}
	if(choice=="walk north"){
		beach();}
	if(choice=="run north"){
		beach();}
	if(choice=="go to beach"){
		beach();}
	if(choice=="walk to beach"){
		beach();}
	if(choice=="run to beach"){
		beach();}
	if(choice=="go to monster"){
		fight();}
	if(choice=="walk to monster"){
		fight();}
	if(choice=="run to monster"){
		fight();}
	if(choice=="go south"){
		fight();}
	if(choice=="walk south"){
		fight();}
	if(choice=="run south"){
		fight();}
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
		cout<<"the area.whenever you are fighting a monster your options are to 'attack' or 'run'"<<endl;
		cout<<"if you ever want to quit just type in 'quit'."<<endl;

		}
	if(choice=="test your might"){
		cout<<"your attack is "<<attack<<endl;}
	if(choice=="quit"){
		cout<<" Thanks for playing. Hope you had fun! "<<endl;
		quit++;}
	if(choice=="look around"){
	cout<<"when you arive on the beach a wall erected behind you.So contounnuing on you see it sreaches to the east,"<<endl;
	cout<<"but to the west there is a steep unclimable cliff."<<endl;
	cout<<"To the south you see a boat that will take you to a island in the distance"<<endl;}
	}while(quit==0);
}
void fight(){
	int playHp=12;
	int attack=6;
	int monHp=12;
	int monAtt=4;
	int quit=0;
	string choice;
	cout<<"some how you maniged to sneak up on this monster which looks to be"<<endl;
	cout<<"some kind of dragon(note you can only 'run' or 'attack')"<<endl;
	do{
	getline(cin,choice);
	if(choice=="run"){
	cout<<" your fear helps you run away untill you pass out"<<endl;
	beach();}
	if(choice=="attack"){
	cout<<"you did "<<attack<<" on the dragon while it did "<<monAtt<<" to you"<<endl;
	playHp+=-monAtt;
	attack++;
	monHp+=-attack;
	monAtt++;}
	if(playHp<0){
		cout<<"you died how did you do that oh well try again later"<<endl;}
	if(monHp<0){
		cout<<"Look you killed it good job it did nothing and you murdered it how do you feel,"<<endl;
		cout<<"I hope its good becaause you won! yyaaayy! now go away!"<<endl;
		quit++;}
		}while(quit==0);
}

void pretty(){
int playHp=12;
int attack=6;
int quit=0;
string choice;
cout<<"what a beautiful area of this beach if only you can stay forever, oh well go west to get back to the grind"<<endl;
do{
	getline(cin,choice);
	if(choice=="go west"){
		beach();}
	if(choice=="walk wast"){
		beach();}
	if(choice=="run west"){
		beach();}
	if(choice=="stay here forever"){
	cout<<"You lived in this beach untill you died knowing you did nothing with your life because of a beautiful beach."<<endl;
		quit++;}
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
		cout<<"the area.whenever you are fighting a monster your options are to 'attack' or 'run'"<<endl;
		cout<<"if you ever want to quit just type in 'quit'."<<endl;

	}
	if(choice=="test your might"){
	cout<<"your attack is "<<attack<<endl;}
	if(choice=="quit"){
	cout<<" Thanks for playing. Hope you had fun! "<<endl;
		quit++;}
	if(choice=="look around"){
		cout<<"what a beautiful area of this beach f only you can stay forever, oh well back to the grind"<<endl;}
	}while(quit==0);
}


