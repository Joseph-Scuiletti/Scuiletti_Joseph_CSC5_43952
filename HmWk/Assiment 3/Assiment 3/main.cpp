/*
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Purpose:  To make a menu for homework purposes
 * Problem 1 -> 'Gaddis_7thEd_chap4_Prob1 a conditonal oprator problem '
 * Problem 2 -> 'Gaddis_7thED_chap4_prob6 a ploblem that uss a if to deturmine if somehing is out of wha tis required'
 * Problem 3 -> 'Gaddis_7thEd_chap4_prob19 a problem that forms a menu for solving how sound moves through a object'
 * Problem 4 -> 'Gaddis_7thEd_chap4_prob23 a problem to help deturmine intenet service '
 * Modified on Mar 30th, 2015
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main() {
    //General Menu Format
    //Display the selection
    cout<<"Type a to solve problem 1 which is Gaddis_7thEd_chap4_Prob1 a conditonal oprator problem"<<endl;//also include the chapter the problem number and author
    cout<<"Type b to solve problem 2 which is Gaddis_7thED_chap4_prob6 a problem that deturmins wight through a equation useing mass"<<endl;// theses can be edited as sees fit for the work and menus
    cout<<"Type c to solve problem 3 which is Gaddis_7thEd_chap4_prob19 a problem that forms a menu for solving how sound moves through a object"<<endl;
    cout<<"Type d to solve problem 4 Gaddis_7thEd_chap4_prob23 a problem to help deturmine intenet service "<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
			case 'A':
            case 'a':{
                //declare variables
				    unsigned short x,y;//two varibles to compair
				    cout<<"this will compaire two varibles to see wich is greater"<<endl;
				    cout<<"input the first number to sttar the comparison"<<endl;
				    cin>>x;
				    cout<<"now the second varible"<<endl;
				    cin>>y;
				    //the if eles if statment
				    if(x==y)
				        cout<<"your first number "<<x<<" is the same as "<<y<<endl;
				    if (x>y)
				        cout<<"your first number "<<x<<" is greater then "<<y<<endl;
				    if(x<y)
				    {
       				 cout<<"your first number "<<x<<" is smaller then "<<y<<endl;
                break;
            }
		}
            case 'B':
            case 'b':{
                //declare variale
				float weight, mass;
				//promt input
				cout<<"to fin out the weight you first need to input the mass must be more then 10 but less then 1000 newtons"<<endl;
				cin>>mass;
				//if statment
				if(mass<=10)
					cout<<"mass is too light"<<endl;
				if(mass>=1000)
					cout<<"mass is too heavy"<<endl;
				else{
					//calculate
					weight=mass*9.8;
				cout<<"the weight is "<<weight<<" pounds"<<endl;};

                break;
            }

            case 'C':
            case 'c':{
                float dist;
				    float speed;
				    float time;
				    char gas;
				    //promt the users for input
				    cout<<"How many long did the instmaint take to detect the sound"<<endl;
				    cin>>time;
				    cout<<"What was the gas used in the experiment Carbin Dioxide use 1,air 2,helium is 3 and hydrogenn is 4"<<endl;
				    cin>>gas;
						if(time<0)
								cout<"the time is too small";
							if(time>30)
				    			cout<<"your time is too large ";
				else{

				    switch (gas){
				            case'1':{

				                    speed=258.0;
				                    break;
				                }
						{
				            case'2':

				                    speed=331.6;
				                    break;
				                }
				            {
				            case'3':

				                    speed=972.0;
				                    break;}
				                {
				                 case'4':

				                    speed=1270.0;
				                    break;}

				            default:cout<<"wrong gas Chosen"<<endl;
				       };
				       //csculate the distance
				       dist=speed*time;
				    //output
				cout<<"the gas used in the experiment Carbin Dioxide use 1,air 2,helium is 3 and hydrogenn is 4";
				cout<<"and you choose"<<gas<<endl;
			cout<<"the distante the sound was made for the experiment was "<<dist<<endl;};
                break;
            }
            case'D':
            case'd':{
				ofstream out;
				    float vwdHrs;
				    char package;
				    const int SIZE=40;
				    char name[SIZE];
				    float bill;
				    //open the file
				    out.open("cable.dat");
				    //state the problem and  where it is located
				    cout<<"this is problem 23 of chapter 4 for Gaddis 7th edition  and the problem is "<<endl;
				    cout<<"for a internet provider service to show a customer possible bill for service"<<endl;
				    //promt the users for input
				    cout<<"How many hours did you view this month?"<<endl;
				    cin>>vwdHrs;
				    cout<<"What is your package 1,2,3"<<endl;
				    cin>>package;
				    cout<<"what is the custmers name?"<<endl;
				    cin.ignore();
				    cin.getline(name,SIZE);
				    //calculate the bill
				    switch (package){
				            case'1':{
				                    bill=9.95;
				                    if(vwdHrs>10)bill+=2*(vwdHrs-10);
				                    break;
				                }
				            {
				            case'2':{
				                    bill=14.95;
				                    if(vwdHrs>20)bill+=(vwdHrs-20);
				                    break;
				                }
				            {
				            case'3':
				                    bill=19.95;
				                    break;}
				                }

				            default:cout<<"wrong Package Chosen"<<endl;
				       };
				    //output
				       cout<<"The solution is contained in cable.dat file"<<endl;
				    out<<fixed<<setprecision(2)<<showpoint;
				    out<<"Customer Name "<<name<<endl;
				    out<<"The package is "<<package<<endl;
				    out<<"hours viewed "<<vwdHrs<<endl;
				    out<<"your total amount is "<<"$"<<bill<<endl;
				    //close the file
    				out.close();
}

            default:{
				cout<<"Exit?"<<endl;
            }
};
    return 0;
}