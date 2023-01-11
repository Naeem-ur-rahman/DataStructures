#include <iostream>
using namespace std;
void A_sort(int[],int&);
void input(int[],int&);
void display(int[],int&);
int main(){
	int s;
	cout << "Enter the Size : ";cin>>s;
	int arr[s];
	
	input(arr,s);
	display(arr,s);
	A_sort(arr,s);
	display(arr,s);
	return 0;
}
void input (int arr[],int &s){
 for (int i=0;i<s;i++){
		cout << "Enter the Value at "<<i<<" index : ";cin>>arr[i];
	}	
}

void display(int arr[],int &s){
	
	for (int i=0;i<s;i++){
		cout << arr[i]<<" ";
	}
	cout <<endl;
}

void A_sort(int arr[],int &s){
	int t,a=0;
	int c=0;
	
	for (int i=0;i<s-1  ;i++){
		
		if(i>=1 && c==0){
				cout << "Array is sorted before all Iterrations of loop"<<endl;
			break;
		
		}
	for (int j=0;j<s-i-1;j++){
		
		 if(arr[j]>arr[j+1]){ 
		 	t=arr[j];
		 	arr[j]=arr[j+1];
		 	arr[j+1]=t;
		 	cout <<a<<" ";
		 	a++;c++;
		 }	 
		}
	cout <<endl;
	}
	
	
}
