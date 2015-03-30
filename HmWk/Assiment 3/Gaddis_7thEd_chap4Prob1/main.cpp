/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti
 * Created on March 30, 2015, 12:21 PM
 *      Purpose:homework
 */
//System Libraries
#include <iostream>
using namespace std;

//user Libraries

//Global Constants

//function prototypes
//exaction 
int main(int argc, char** argv) {
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
        
    }    
    return 0;
}

