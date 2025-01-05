#include<iostream>
using namespace std;

int main(){

    //outer loop - row
    for (int row = 0; row <3; row = row + 1){
        if(row == 0 || row == 2){
            for(int col = 0; col<5; col = col +1){
                cout << "* ";
            }
        }

        else{
            cout << "* ";
            for(int col = 0; col <3; col = col + 1){
                cout<<" *";
            }
        }
    }
}





// #include<iostream>
// using namespace std;

// int main() {

//     // Outer loop for rows
//     for (int row = 0; row < 3; row++) {
//         // For the first and last rows
//         if (row == 0 || row == 2) {
//             for (int col = 0; col < 5; col++) {
//                 cout << "* ";
//             }
//         } 
//         // For the middle rows
//         else {
//             cout << "* "; // First star
//             for (int col = 0; col < 3; col++) {
//                 cout << "  "; // Spaces in the middle
//             }
//             cout << "* "; // Last star
//         }
//         cout << endl; // Move to the next row
//     }

//     return 0;
// }

