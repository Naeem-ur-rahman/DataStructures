#include <iostream>
using namespace std;
void Insert(int arr[],int &s,int &item,int & loc);
void Print (int arr[],int &s);
void Input(int arr[],int &s);
int main(){
	
	int arr[100],s,item,loc;
	cout << "Enter the Size of Array : ";cin>>s;
	Input(arr,s);
	Print(arr,s);
	cout << "Enter the Value to Insert : ";cin>>item;
	cout << "Enter the Location : ";cin>>loc;
	Insert(arr,s,item,loc);
	Print(arr,s);
	return 0;
}
void Insert(int arr[],int &s,int &item,int &loc){
	
	for (int i=s;i>=loc;i--){
	arr[i]=arr[i-1];	
	}
	arr[loc]=item;
	s=s+1;
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
