/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti  
 * Created on March 2, 2015, 9:04 AM
 *  `   Purpose: Free  Fall problem from Savitch
 */

//System Libraries
#include <Iostream>
using namespace std;

// User Libraries

// Global Constants
const float G=3.217e11;//Accleration in ft/per second
const float CNVFTMT=3.04e-1f;//Convertion from feet to meters

//Funtion Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    float time,dstnce;
    //Promt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx (seconds)"<<endl;
    cin>>time;
    //Calculate dstnce
    dstnce=5e-1f*G*time*time;
    //dstnce=1/2*G
    //dstnce=
    //dstnce=
    cout<<"Distance fallen = "<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fallen = "<<dstnce*CNVFTMT<<"(Meter)"<<endl;
    //Exit stage right
     
                         
                                  
            
         
    return 0;
}

