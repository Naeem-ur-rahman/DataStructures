#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int x,y,i,j;
	char c;
	cout << "Enter the size of Matrix in form ( i/j ) : ";cin>>x>>c>>y;
	int matrix[x][y] ,transpose[y][x];
	cout << "Enter the Values of the Matrix ! "<<endl;
	    for (i=0;i<x;i++){
		for (j=0;j<y;j++){
			cin>>matrix[i][j];
		}
	}
	cout << "Matrix is ! "<<endl;
	    for (i=0;i<x;i++){
		for (j=0;j<y;j++){
			
			cout<<setw(10) << matrix[i][j];
		}
		cout <<endl;
	}
	
	    for (i=0;i<x;i++){
		for (j=0;j<y;j++){
			transpose[j][i] = matrix[i][j];
		}
	}
		cout << "Transpose of Matrix is ! "<<endl;
	    for (i=0;i<y;i++){
		for (j=0;j<x;j++){
			
			cout<<setw(10) << transpose[i][j];
		}
		cout <<endl;
	}
}
