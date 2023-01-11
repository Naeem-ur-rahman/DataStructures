#include <iostream>
using namespace std;
void print(int[],int&);
void insertion_sort(int[],int&);
void input (int[],int&);
int main(){
	int s;
	cout << "Enter the Size of Array : ";cin>>s;
	int arr[s];
	input(arr,s);
	print(arr,s);
	insertion_sort(arr,s);
	print(arr,s);
	return 0;
}
void input(int arr[],int &s){
	for(int i=0;i<s;i++){
		cout << "Enter "<<i<<" Index Value : ";cin>>arr[i];
	}
	
}
void print(int arr[],int&s){
	cout<<"Array is !" <<endl;
	for(int i=0;i<s;i++){
		cout << arr[i]<<"  ";
	}
	cout << endl;
}

void insertion_sort(int arr[],int& s){
	
	int key,t;
	
	for(int i=1;i<s;i++){
		cout << "Sorted cells are : "<<i<<endl;
		key=arr[i];
		t=i-1;
			cout << "t   = "<<t<<endl;
			cout << "Key = "<<key<<endl;
		while(arr[t] > key && t >= 0 ){
	
			arr[t+1]=arr[t];
			print(arr,s);
			t--;
			cout << "t   = "<<t<<endl;
		}
		arr[t+1]=key;
	    cout<<"After swapping with key  "<<endl;
	    print(arr,s);
	}
	
}
