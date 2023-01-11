#include <iostream>
using namespace std;
int main(){
	int s=300;
	char str[s];
	
	cout << "Enter the String : ";cin.getline(str,s);
	char* ptr;
	ptr = str;
	int size=sizeof(*ptr);
	while(*ptr){
		size+=sizeof(*ptr);ptr++;
	}
	cout << "Size of String is : "<<size;
	
	return 0;
}
