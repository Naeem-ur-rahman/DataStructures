#include <iostream>
using namespace std;
int main(){
	int s=300,count=0,l=0;char str[s],*ptr=str;
	cout << "Enter a String : ";cin.getline(str,s);
	while(*ptr){
		
		if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr== 'o' || *ptr == 'u'){
			count++;
		}
		l++;ptr++;
	}
	cout << "Length of String is : "<<l<<endl;
	cout << "Vowels in String are: "<<count<<endl;
	return 0;
}
