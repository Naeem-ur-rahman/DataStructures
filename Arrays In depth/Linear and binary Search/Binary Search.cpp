#include <iostream>
using namespace std;
int i=0,j=0,t=0,n=0;
void input (int[],int&);
void sort  (int[],int&);
void print (int[],int&);
int search (int[],int&);
int main(){
	int s;
	cout << "Enter size of Array : ";cin>>s;
	int arr[s];
	input (arr,s);
	print (arr,s);
	sort  (arr,s);
	print (arr,s);
	int num= search(arr,s);
	if (num==-1){
		cout << "_____This Value is not Present in Array_____ "<<endl;
	}
	else{
		cout << "This "<<arr[num]<<" value is at index : "<<num<<endl;
	}
}
void input (int arr[],int& s){
	cout << "Enter the Values in Array "<<endl;
	for (i=0;i<s;i++){
		cout << "Enter "<<i<<" index value : ";cin>>arr[i];
}
}
void sort (int arr[],int& s){
	cout << "Sorting is Processing ! "<<endl;
	for(i=0;i<s-1;i++){
		for(j=0;j<s-1;j++){
			if (arr[j]>arr[j+1]){
			    t = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}
void print (int arr[],int& s){
	cout << "Array is "<<endl;
	for(i=0;i<s;i++){
		cout << arr[i]<<"  ";
	}
	cout <<endl;
}
int search(int arr[],int& s){
	cout << "Enter a number to search : ";cin>>n;
	cout << "Search is in Processing ! "<<endl;
	int m=s/2;
	if (n==arr[m]){
		return m;
	}
	else if (n<arr[m]){
		for(i=m;i>=0;i--){
			if(n==arr[i]){
				return i;
			}
		}
	}
	else if(n>arr[m]){
		for(i=m+1;i<s;i++){
			if (n==arr[i]){
				return i;
			}
		}
	}
	return -1;
}
