#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;

    int row = 1;
    int count = 1;
    while(row <= x){
        int col = 1;
        while(col <= row){
            cout<<row<<" ";
           // count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1; 
    }
    return 0;
}