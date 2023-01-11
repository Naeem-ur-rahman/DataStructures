#include <iostream>
using namespace std;
int main ()
{
	int check[6]={0},i;
	cout << "Enter no of Inputs : ";cin >>i;
	int A[i];
	for(int a=0;a<i;a++)
	{
		cout << "Enter the value : ";cin>>A[a];cout <<endl;
	}
	for (int a=0;a<i;a++)
	{
		if (check[a]==1)
		{
			continue ;
		}
		int count =1;
		for (int b=a+1;b<i-1;b++)
		{
			if (A[a]==A[b])
			{
                 check[b]=1;
                 count++;
			}
		}
		cout << "Frequency of "<<A[a]<<" is : " << count <<endl;
	}
	return 0;
}
