// Library
#include <iostream>

// Initialization
using namespace std;
int i, j, rows;

// Main Program
int main(){
    cout << "Please input range(n) value for the repetition = "
    cin >> rows;
    string  list[3] = {"*", "#", "%"};
    for (i = 0; i <= rows; i++){
        int jumprow = 0;
        for (j = 0; j <= i; j++){
            if (jumprow >= 3){
                jumprow = 0;
            }
            cout << list[jumprow];
            jumprow++;
        }
        cout << endl;
    }
    return 0;
}