#include<iostream>
using namespace std;


int main() {
    int rowCount, colCount;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> rowCount >> colCount;

    // Outer loop for rows
    for (int row = 0; row < rowCount; row++) {
        // First and last rows
        if (row == 0 || row == rowCount - 1) {
            for (int col = 0; col < colCount; col++) {
                cout << "* ";
            }
        } 
        // Middle rows (hollow rows)
        else {
            cout << "* "; // First star
            for (int col = 0; col < colCount - 2; col++) {
                cout << "  "; // Spaces in the middle
            }
            if (colCount > 1) {
                cout << "* "; // Last star
            }
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
