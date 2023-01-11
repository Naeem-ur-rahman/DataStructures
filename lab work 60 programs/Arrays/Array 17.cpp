#include <iostream>
using namespace std;
int main ()
{
	int a,b,c[12]={31,28,31,30,31,30,31,31,30,31,30,31},t=0;
	cout << "Enter the Day   (1-31): ";cin>>b;
	cout << "Enter the Month (1-12): ";cin>>a;
	
	for(int i=1;i<a;i++)
	{
		t += c[i];
	}
	
	t+=b;
	cout << "Total no of Days from the start of year to the Day Enter are '"<< t <<"' DAYS"<<endl;
	return 0;
}
