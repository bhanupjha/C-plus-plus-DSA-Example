#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int i = 1;
    // Outer loop: It will run from 1 to n
    while (i <= n) {
        int j = 1;
        // Inner loop: It will run from 1 to the current value of i
        while (j <= i) {
            cout << "*";  // Output an asterisk (*)
            j = j + 1;
        }
        cout << endl;  // Move to the next line after printing the asterisks
        i = i + 1;      // Increment the outer loop counter
    }
    return 0;
}
