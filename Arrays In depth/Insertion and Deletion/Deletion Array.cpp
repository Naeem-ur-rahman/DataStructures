#include <iostream>
using namespace std;
void Delete(int arr[],int &s,int &item,int & loc);
void Print (int arr[],int &s);
void Input(int arr[],int &s);
int main(){
	
	int arr[100],s,item,loc;
	cout << "Enter the Size of Array : ";cin>>s;
	Input(arr,s);
	Print(arr,s);
	cout << "Enter the Location to be delete : ";cin>>loc;
	Delete(arr,s,item,loc);
	Print(arr,s);
	return 0;
}
void Delete(int arr[],int &s,int &item,int &loc){
	
	item=arr[loc];
	cout << "Deleted Value is : "<<item<<endl;
	for (int i=loc;i<s;i++){
	arr[i]=arr[i+1];	
	}
	s=s-1;
}
void Print (int arr[],int &s){
	for (int i=0;i<s;i++){
		cout << arr[i]<<"  ";
	}
	cout <<endl;
}
void Input(int arr[],int &s){
	for (int i=0;i<s;i++){
		cout << "Enter Value at "<<i<<" index  : ";cin>>arr[i];
}
}
