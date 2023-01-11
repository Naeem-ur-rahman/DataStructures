#include <iostream>
using namespace std;
int main(){
	
	void swap(int*,int*);
	int x;
	int y;
	cout << "Enter 1st Number : ";cin>>x;
	cout << "Enter 2nd Number : ";cin>>y;
	swap(&x,&y);
	cout << "After swap ! "<<endl;
	cout << "Enter 1st Number : "<<x<<endl;
	cout << "Enter 2nd Number : "<<y<<endl;
	return 0;
}
void swap(int* ptr1,int* ptr2){
	int t = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = t;
}
