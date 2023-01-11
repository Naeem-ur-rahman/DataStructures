#include <iostream>
#include <iomanip>
using namespace std;
void print(int* ptr,int s){
	for(int i=0;i<s;i++){
		cout<<setw(5)<<setiosflags(ios::left) <<*(ptr+i);}
		cout << endl;
}
void input(int* ptr,int s){
	for(int i=0;i<s;i++){
		cout << "Enter "<<i+1<<" : ";cin>>*(ptr+i);}
		cout<<endl;
}
void del(int *ptr,int s){
	int n;
	cout << "Enter the point where array has to delete the value : ";cin>>n;
	for (int i=n-1;i<s;i++){
		*(ptr+i)=*(ptr+i+1);
	}
	*(ptr+s-1)=0;
}
void search(int *ptr,int s){
	int n;
	cout << "Enter the value to search  : ";cin>>n;
	for (int i=0;i<s;i++){
		if(*(ptr+i)==n){
		cout <<*(ptr+i)<<" is at Poistion : "<<i+1<<endl;	
		}}}
void insert1(int* ptr,int s){
	int n;
	cout << "Enter value to replace : ";cin>>n;
	int in;
	cout << "Enter the position : ";cin>>in;
	*(ptr+in-1)=n;
}
void sortA(int* ptr,int s){
	cout << "Sort into Assending Order"<<endl;
	for(int i=0;i<s-1;i++)
	for(int j=0;j<s-1;j++){
		if(*(ptr+j)>*(ptr+j+1)){
			int t=*(ptr+j);
			*(ptr+j)=*(ptr+j+1);
			*(ptr+j+1)=t;}}
}
int main(){
	int s;
	cout << "Enter the Size : ";cin>>s;
	int arr[s];
	input(arr,s);
	cout << "Array is "<<endl;
	print(arr,s);
	sortA(arr,s);
	print(arr,s);
	del(arr,s);
	cout << "Array is "<<endl;
	search(arr,s);
	insert1(arr,s);
	cout << "Array is "<<endl;
	print(arr,s);
	
return 0;     	
}
