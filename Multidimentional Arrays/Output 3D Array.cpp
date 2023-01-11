#include <iostream>
using namespace std;
int main() {
    int arr3D[3][2][2] = {
                        { { 0 , 1 },  { 2, 3 }  }, 
                        { { 4 , 5 },  { 6, 7 }  }, 
						{ { 8 , 9 },  {10, 11}  }  };
                        
	                    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) 
			{
                cout << "Array 3D [" << i << "][" << j << "][" << k << "] = " << arr3D[i][j][k] << endl;
            }
        }
    }
    return 0;
}
