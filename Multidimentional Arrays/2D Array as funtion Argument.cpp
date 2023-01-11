#include <iostream>
#include <iomanip>
using namespace std;

void display(int n[][2]) {
    cout << "Displaying Output ! " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << setw(10) << n[i][j] ;
        }
        cout <<endl;
    }
}

int main() {

    int num[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1}
    };
    display(num);
 return 0;
    
}
