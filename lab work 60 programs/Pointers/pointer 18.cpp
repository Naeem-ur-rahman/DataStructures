#include <iostream>
using namespace std;
int main(){
	int a, *ptr=&a;
	cout << "Enter a Number : ";cin>>a;
	cout << "Increment : "<<++(*ptr)<<endl;
	cout << "Increment : "<<++(*ptr)<<endl;
	cout << "Double Increment : "<<++++(*ptr)<<endl;
	cout << "Decrement : "<<--(*ptr)<<endl;
	return 0;
}
