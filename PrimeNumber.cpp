#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int div = 2;
    while(div < n){
        if(n % div == 0){
            cout<<"Number is not prime "<<endl;
            return 0;
        }
        div = div + 1;
    }
    cout<<"Number is prime";
    return 0;
}