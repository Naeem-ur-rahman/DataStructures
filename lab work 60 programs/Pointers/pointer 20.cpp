#include <iostream>
using namespace std;
int main(){
	float area(float*), r;
	cout <<"Enter the Radius : ";cin>>r;
	cout << "Area of Circle is : "<<area(&r)<<endl;
	return 0;
}
float area(float* ptr){
	return (*ptr)*(*ptr)*3.14;
}
