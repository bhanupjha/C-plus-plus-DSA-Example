#include<iostream>
using namespace std;

int main(){

//*************** Implicit conversion ****************************************    
    int a = 'a';
    cout<<a<<endl;

    int d = 23.8;
    cout<<d<<endl;
    
    char ch = 98;
    cout<<ch<<endl;

    char ch1 = 123456; //implicit conversion from int to 'char' changes value from 123456 to 64 i.e @.
    // A warning is thrown and the last byte from the original value is given to the character.
    cout<<ch1<<endl;

    unsigned int b = 5;
    cout<<b<<endl;

    unsigned int c = -5; // -5 in signed integer, stored in unsigned integer
    // The bit pattern for -5 is 11111111111111111111111111111011
    // When interpreted as an unsigned integer, this bit pattern is 4294967291
    cout << c << endl; // Outputs 4294967291 (check notes, page no. 20)

//*******************Explicit conversion********************************************
    int x = 24;
    double y = 22.4;
    int z = int(y);
    cout<<"x: "<<x<<", z: "<<z<<endl;
    cout<<"x+z: "<<x+z<<endl;

    int U = 34;
    float  V = 54.67;
    cout<<"The value of U is: "<<(float)U<<endl;
    cout<<"The value of U is: "<<float(U)<<endl;  

    cout<<"The value of V is: "<<(int)V<<endl;
    cout<<"The value of V is: "<<int(V)<<endl;   
    int i = int(V);
    cout<<"The value of i is: "<<i<<endl<<endl;

    cout<<"The value of expression is: "<<U+V<<endl;
    cout<<"The value of expression is: "<<U+int(V)<<endl;
    cout<<"The value of expression is: "<<U+(int)V<<endl;
    cout<<"The value of expression is: "<<U+i<<endl;

}
