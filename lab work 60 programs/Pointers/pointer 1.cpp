#include <iostream>
using namespace std;
int main(){
	
	int size = 0;
	cout << "Enter the number of Values : ";
	cin >> size ; 
	float arr[size];
	float sum=0;
	float * ptr = &arr[0];
	for (int a=0;a<size;a++){
		
		cout << "Enter the "<<a+1<<"  value : ";
		cin >> *(a+ptr);
		sum+= *(a+ptr);
	}
	cout << "Mean is : "<<sum/size;
	
}
