#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the vaue of n: "<<endl;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<i;     // Print the current value of 'i'
            j = j + 1;
        }
        cout<<endl;    // Move to the next line after each row is printed
        i = i + 1;     // Increment 'i' for the next row
    }
    return 0;
}