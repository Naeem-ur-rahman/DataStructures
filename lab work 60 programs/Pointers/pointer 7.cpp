#include <iostream>
using namespace std;
void input(int*,int &);
void print(int*,int &);
int main(){
	int s;
	cout << "Enter the Size of Array : ";cin>>s;
	int arr[s];
	input(arr,s);
	print(arr,s);
	return 0;
}
void input(int* ptr,int&s){
	
	for(int a=0;a<s;a++){
		cout << "Enter "<< a+1<< " Value : ";cin>>*(ptr+a);
	}
	
}
void print(int* ptr,int&s){
	cout << endl<<"----Array----"<<endl;
	for(int a=0;a<s;a++){
		cout <<*(ptr+a)<<"  ";
	}
	
}
