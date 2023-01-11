#include <iostream>
using namespace std;
void print(int[],int&);
void selection_sort(int[],int&);
void input (int[],int&);
int main(){
	int s;
	cout << "Enter the Size of Array : ";cin>>s;
	int arr[s];
	input(arr,s);
	print(arr,s);
	selection_sort(arr,s);
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

void selection_sort(int arr[],int& s){
	int min=0,temp;
	for(int j=0;j<s-1;j++){
		min=j;
	for( int i=0+j;i<s-1;i++){

		if(arr[min]>arr[i+1])
		{
			min=i+1;  
		}
	}
	
	temp=arr[min];
	arr[min]=arr[j];
	arr[j]=temp;

}
	
}
