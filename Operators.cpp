#include<iostream>
using namespace std;

int main(){
 //Arithmetic operator   
    int a = 5/2;
    cout<<a<<endl;

    int c = 0.5/7;
    cout<<c<<endl;

    float b = 4.5/2;
    cout<<b<<endl;

    double d = 4.5/2;
    cout<<d<<endl;

//Relational opertor
    int x = 5;
    int y = 7;
 
    bool first = (x==y);
    cout<<first<<endl;

    bool second = (x>y);
    cout<<second<<endl;

    bool third = (x<y);
    cout<<third<<endl;

    bool fourth = (x>=y);
    cout<<fourth<<endl;

    bool fifth = (x<=y);
    cout<<fifth<<endl;

    bool sixth = (x!=y);
    cout<<sixth<<endl;

 //Logical operator
    int j = 7,  k = 3, l = 15;
    cout<<((j>0)&&(k!=0)&&(l>=15))<<endl;     //logical AND
    cout<<((j>7)||(k==3)||(l<15))<<endl;     //logical OR
    cout<<(!j)<<endl;                       //logical NOT

    int M = 0;
    cout<<(!M)<<endl;                      //logical NOT
    return 0;
}