#include <iostream>
using namespace std;
int main(){
	int s;
	
	cout << "Enter the Size of Array : ";
	cin>>s;
	int arr[s];
	int* ptr;
	ptr = &arr[0];
	for(int a=0;a<s;a++){
		cout << "Enter "<<a+1<<" value : ";
		cin>>*(ptr+a);
	}
	int n,flag=0;
	cout << "Enter a Number for search : ";
	cin >>n;
	
	for(int a=0;a<s;a++){
		if (*(ptr+a)==n){
			cout <<*(ptr+a)<< " is at position : "<<a+1<<endl;
			flag++;
		}
	}
	if (flag ==0){
		cout << "Number "<<n<<" is not in the array "<<endl;
	}
	
	return 0;
}
