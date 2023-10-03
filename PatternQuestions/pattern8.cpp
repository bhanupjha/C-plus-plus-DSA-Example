#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the value of x: " << endl;
    cin >> x;

    int row = 1;
    int count = 1;
    // Outer loop: It controls the number of rows
    while (row <= x) {
        int col = 1;
        // Inner loop: It controls the number of columns in each row
        while (col <= row) {
            cout << count << " "; // Print the value of 'count' followed by a space
            count = count + 1;    // Increment the 'count' for the next number
            col = col + 1;        // Increment the inner loop counter
        }
        cout << endl;   // Move to the next line after completing a row
        row = row + 1; // Increment the outer loop counter to move to the next row
    }
    return 0;
}
