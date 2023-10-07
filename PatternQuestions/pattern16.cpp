#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int i = 1;
    int count = 'A';
    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch  = count;
            cout<<ch<<" ";
            count = count + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}