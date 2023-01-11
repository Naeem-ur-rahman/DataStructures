#include <iostream>
using namespace std;
int main ()
{
	int A[3]={1,2,3};
	int B[3]={4,5,6};
	int s;
		for(int c=0;c<3;c++)
	{
		s=A[c];
		A[c]=B[c];
		B[c]=s;
	}
	cout << "Values in A After Swaping are "<<endl;
	for (int a=0;a<3;a++)
	{
	cout << A[a]<<"  ";	
	}
	cout << endl;
	cout << "Values in B After Swaping are "<<endl;
	for (int b=0;b<3;b++)
	{
		cout <<B[b]<<"  ";
	}
	return 0;
}
