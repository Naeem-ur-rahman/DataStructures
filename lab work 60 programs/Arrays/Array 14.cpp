#include <iostream>
using namespace std;
int main()
{
	int b,A[b],min = INT_MAX,max=INT_MIN;
	cout << "Enter the number of inputs : ";cin>>b;
	cout << "Enter values  "<<endl;
	for (int a=0;a<b;a++)
	{
		cin>>A[a];
		if (max < A[a])
		{
			max = A[a];
		}
		if (min > A[a])
		{
			min = A[a];
		}
	}
	cout << "The samllest value is : "<<min<<endl;
	cout << "The largest value is  : "<<max<<endl;
	return 0;
	
}
