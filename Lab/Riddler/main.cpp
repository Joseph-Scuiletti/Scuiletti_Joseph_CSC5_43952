/* 
 * File:   main.cpp
 * Author: Joseph 
 * Created on March 30, 2015, 10:17 AM
 *      Purpose: find four didgit number that passes the conditions
 */
//sytem libaries
#include <iostream>
using namespace std;

//user libarirays

//gloabl constants

//function prototypes

//exacution
int main(int argc, char** argv) {
//looop for all possible digits
    for(int d1000=0;d1000<=9;d1000++){
        for(int d100=0;d100<=9;d100++){
            for(int d10=0;d10<=9;d10++){
                for(int d1=0;d1<=9;d1++){
                    if((d1000==3*d10) &&
                            (d1%2==1  ) &&
                            ((d1000+d100+d10+d1)==27)&&
                            (d1!=d10&&d1!=d100&&d1!=d1000&&
                            d10!=d100&&10!=d1000&&d100!=d1000)){                        
                        cout<<"The Address number = ";
                        cout<<d1000<<d100<<d10<<d1<<endl;
                    }
                }
            }
        }
    }
    //exit 
    return 0;
}

