#include <iostream>
using namespace std;
int main(){
	
	cout << "Enter a Number : ";
	int n;
	cin >> n ;
	int* ptr;
	ptr = &n;
	cout << "Your Entered Number is : "<<*ptr<<endl;
	
}
