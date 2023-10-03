#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int i = 1;
    int count = 1;   // Initialize a counter variable to track the numbers to be printed
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<<count<<" ";   // Print the current value of the count variable followed by a space
            count = count + 1;  // Increment the count variable
            j = j + 1;          // Increment j
        }
        cout<<endl;          // Move to the next line after printing a row
        i = i + 1;          // Increment i to move to the next row
    }
    return 0;
}