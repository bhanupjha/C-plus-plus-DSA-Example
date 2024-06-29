#include<iostream>
using namespace std;

int main(){
    int a = 234;
    cout<<a<<endl;
    cout<<"Size of a is: "<<sizeof(a)<<" byte"<<endl;
    
    char b = 'B';
    cout<<b<<endl;
    cout<<"Size of b is: "<<sizeof(b)<<" byte"<<endl;

    float c = 1.23;
    cout<<c<<endl;
    cout<<"Size of c is: "<<sizeof(c)<<" byte"<<endl;

    double d = 22.34;
    cout<<d<<endl; 
    cout<<"Size of d is: "<<sizeof(d)<<" byte"<<endl;

    bool e = true;
    cout<<e<<endl; 
    cout<<"Size of e is: "<<sizeof(e)<<" byte"<<endl;
}