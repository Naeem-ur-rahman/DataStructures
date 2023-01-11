#include <iostream>
using namespace std;
int main(){
	int s,sum=0;
	cout << "Enter Size : ";cin>>s;
	int arr[s];
	for (int i=0;i<s;i++){
	cout << "Enter : ";cin>>arr[i];
	sum+=arr[i];}
	cout<< "Sum is : "<<sum<<endl;
	return 0;}
