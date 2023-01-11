#include <iostream>
using namespace std;
int main(){
	int s=26;
	char arr[s];
	char* ptr;
	ptr = arr;
	for(int a=0;a<s;a++){
		*(ptr+a)=a+'A';
	}
	for(int a=0;a<s;a++){
		
		cout << *(ptr+a)<<"  ";
	}
	cout << endl;
	return 0;
}
