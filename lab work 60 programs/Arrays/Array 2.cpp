#include <iostream>
using namespace std;
int main(){
	int s;cout << "Enter the size of Array : ";cin>>s;
	int arr[s],max;
	for(int a=0;a<s;a++){
		cout << "Enter : ";cin>>arr[a]; }
		max=arr[0];
		for(int a=0;a<s;a++){
		if(max<arr[a]){ max=arr[a]; }	 }
		cout << "Max Number is  : "<<max<<endl; 
	return 0; }
