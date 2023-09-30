#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int div = 2;
    while(div < n){
        if(n % div == 0){
            cout<<"Number is not prime for "<<div<<endl;
        }
        else{
             cout<<"Number is prime for "<<div<<endl;

        }
        div = div + 1;
    }
    return 0;
}