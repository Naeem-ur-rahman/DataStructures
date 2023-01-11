#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned long i,a[i];
	cout << "Enter the Number of lines you want to Print :  ";cin>>i;
	for (int b=0;b<i;b++)
	{
		cout << b+1 << "  Enter : ";cin>>a[b];
	}
	cout << endl;
	for (int c=0;c<i;c++)
	{
		cout << c+1 << setw(5) << a[c] <<"   ";
		for (int d=0;d<a[c];d++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
