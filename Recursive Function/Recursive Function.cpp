#include <iostream>
using namespace std;
unsigned long  factorial( unsigned long );
int main(){
	int a;
	cout << "Enter a value : ";cin>>a;
	
	cout << "The Factorial of "<< a << " is : "<<factorial(a)<<endl;
	return 0;
} 

unsigned long factorial ( unsigned long a){
	
	if (a>1){
		return a * (factorial(a-1));
	}
	else {
		return 1;
	}
	
}
