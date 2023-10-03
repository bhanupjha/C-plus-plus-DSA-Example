#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int row = 1;
    // Outer loop: It controls the number of rows
    while (row <= n) {
        int col = 1;
        // Inner loop: It controls the number of columns in each row
        while (col <= row) {
            cout << row << " "; // Print the value of 'row' followed by a space
            col = col + 1;     // Increment the inner loop counter
        }
        cout << endl;   // Move to the next line after completing a row
        row = row + 1; // Increment the outer loop counter
    }
    return 0;
}
