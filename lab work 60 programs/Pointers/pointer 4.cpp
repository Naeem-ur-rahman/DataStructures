#include <iostream>
using namespace std;
void print(int* );
int main(){
	int x;
	cout << "Enter a Number : ";
	cin>>x;
	print(&x);
	system("pause");
	return 0;
}
void print (int *ptr){
	
	cout << "Your Enter Number is : "<<*ptr<<endl;
	
}
