#include <iostream>
using namespace std;
void mediean (float[],int);
int main ()
{
	int a;
	cout << "Enter the Number of Values : ";cin>>a;
	const int size = a;
	float array[a];
	mediean (array,a);
	return 0;
}
void mediean (float a[],int b)
{
	float m =  0 ;
	for (int x=0;x<b;x++)
	{
		cout << x+1 << " Enter : " ; cin>>a[ x ];
	}
	cout <<endl;
	for (int x=0;x<b-1;x++)
	{
		for (int y=0;y<b-1;y++)
		{
			if (a[y]>a[y+1])
			{
				int t;
				t= a[y];
				a[y]=a[y+1];
				a[y+1]=t;
			}
		}
	}
	cout << "      IN ORDER    "<<endl;
	for (int y=0;y<b;y++)
	{
		cout << a[y]<<"  ";
	}
	cout <<endl;
	if (b%2!=2)
	{
		m = a[b/2];
	}
	else 
	{
		m = ( (  a [ ( b-1 ) / 2 ] + a[ b / 2 ] ) / 2 );
	}
	cout <<"Mediean is : "<< m << endl;
}
