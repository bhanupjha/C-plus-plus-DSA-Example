#include<iostream>
using namespace std;

int main(){
// Fahrenheit to celsius
    float fahrenheit;
    cout<<"Enter the value: ";
    cin>>fahrenheit;
    float celsius = (5.0/9.0)*(fahrenheit - 32);
    cout<<fahrenheit << " F " << " = " << celsius << " C ";
    return 0;
}

