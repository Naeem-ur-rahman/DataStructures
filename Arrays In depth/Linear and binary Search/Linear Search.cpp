#include <iostream>
using namespace std;

int main(){
	int s,flag=0,n;
	cout<< "Enter size of Array : ";cin>>s;
	int arr[s];
	for(int i=0;i<s;i++) {
     cout<< "Enter "<<i<<" index value : ";cin>>arr[i];}
	
	cout << "Enter a Value to Search : ";cin>>n;
	for(int i=0;i<s;i++){
	if(n==arr[i])	{
		cout << "Value is at index : "<<i<<endl;flag++;break; }
	}
	if(flag==0) {
	cout << "Value is not found !"<<endl;}
	return 0;
}
