#include <iostream>
using namespace std;
int main() {
    int s = 200; 
    char text1[s], text2[s];
    char* ptr1 = text1;
    char* ptr2 = text2;
    cout<<"Enter String : ";cin.getline(text1,s);
    while(*ptr1){
    	 *(ptr2)++ = *(ptr1)++;
	}
    cout<<"1st  String : "<<text1<<endl;;
    cout<<"2nd  String : "<<text2<<endl;
    return 0;
}
