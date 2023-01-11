#include <iostream>
using namespace std;
int main() {
	int s=100;
    char text[s];
    char * ptr = text;
    int count = 0;
    cout<<"Enter a string : ";cin.getline(text,s);
    while(*ptr) {
	count++; *ptr++;
}
    cout<<"Length of string is : "<<count;
 
    return 0;
}
