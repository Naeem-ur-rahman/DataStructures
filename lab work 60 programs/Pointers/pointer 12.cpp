#include <iostream>
using namespace std;
int main ()
{
	void str(char *);
	int s=200;
	char string[s];  
	cout << "Enter the String : ";
	cin.getline(string,s);
	
	str(string);
	return 0;
}
void str(char* str1)
{
	cout << "String = "<<str1<<endl;
}
