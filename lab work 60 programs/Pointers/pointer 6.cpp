#include <iostream>
using namespace std;
int main(){
	void centimeter(double*);
	
	double n;
	cout << "Enter the Value in inches : ";
	cin>>n;
	centimeter(&n);
	cout << "Answer in Centimeters : "<<n<<endl;
	return 0;
}
void centimeter(double* ptr){
	(*ptr)*= 2.54 ;
}
