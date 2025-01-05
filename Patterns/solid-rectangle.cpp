#include <iostream>
using namespace std;

int main (){
    //outer loop - row
    for(int row = 0; row <3; row++){
        //inner loop - col
        for (int col = 0; col<5; col++){
            //printing star
            cout << "* ";
        }
        cout << endl;
        
    }
}