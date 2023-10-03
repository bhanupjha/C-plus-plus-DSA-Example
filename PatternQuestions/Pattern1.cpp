#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<<"*";   // Print an asterisk for each column in the row.
             j = j + 1;
        }
        cout<<endl;      // Move to the next line after printing all the columns.
         i = i + 1;
    }
    return 0;
}