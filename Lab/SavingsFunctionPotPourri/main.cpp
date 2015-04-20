/* 
 * File:   main.cpp
 * Author: Joseph Scuiletti 
 * Created on April 20, 2015, 8:14 AM
 */
//system libariea 
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//user libaries

//global constants 

//function prototypes
float save1(float,float,int);//power
float save2(float,float,int);//exp and log
float save3(float,float,int);//for-loop
float save4(float,float,int);//reclesive -> calluing it self
float save5(float=100.0f,float=0.08f,int=9);//defalted peramter
void save6(float &,float,float,int);//pass by reference
void save7(float &,float,int);//pass by reference
float save1(float,float,float);//over ridden function/same name
//excution
int main(int argc, char** argv) {
    float pv=100.0f;//present value $
    float ir=0.08f; //intrest rate
    int nC=9; //number of compouding periods in yrs
    //output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"present Value = $"<<pv<<endl;
    cout<<"interest rate = "<<ir*100<<"%"<<endl;
    cout<<"Numbers of compounding periods = "<<nC<<"yrs"<<endl;
   cout<<"savings function 1 = $"<<save1(pv,ir,nC)<<endl;
   float nCf=nC;
   cout<<"savings function 1 = $"<<save1(pv,ir,nCf)<<endl;
   cout<<"savings function 2 = $"<<save2(pv,ir,nC)<<endl;
   cout<<"savings function 3 = $"<<save3(pv,ir,nC)<<endl;
   cout<<"savings function 4 = $"<<save4(pv,ir,nC)<<endl;
   cout<<"savings function 5 = $"<<save5(pv,ir,nC)<<endl;
   cout<<"savings function 5 = $"<<save5(pv,ir)<<endl;
   cout<<"savings function 5= $"<<save5(pv)<<endl;
   cout<<"savings function 5= $"<<save5()<<endl;
   float fv;
   save6(fv,pv,ir,nC);
   cout<<"Savings function 6 = $"<<fv<<endl;
   save7(pv,ir,nC);
   cout<<"Savings function 7 = $"<<pv<<endl;
     
    return 0;
}
//function for future value calculation
//inputs
//      p-> presents value $'s
//      i-> Intrest rates %/compounding period
//      n->
//outputs
float save1 (float p,float i, int n){
    cout<<"save1 with interger n"<<endl;
    return p*pow((1+i),n);
}
float save1 (float p,float i, float n){
    cout<<"save1 with float n"<<endl;
    return p*pow((1+i),n);
}
float save2 (float p,float i, int n){
    return p*exp(n*log(1+i));
    }
float save3 (float p,float i, int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);}
    return p;
} 
float save4 (float p,float i, int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
} 
float save5 (float p,float i, int n){
    return p*pow((1+i),n);
}

void save6(float &f,float p,float i,int n){ 
    f=p*pow((1+i),n);
}

void save7(float &p,float i,int n){ 
    p=p*pow((1+i),n);
}