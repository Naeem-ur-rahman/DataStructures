#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
using namespace std;
int main ()
{
	const int size = 7; 
	int D[size]={0};
	srand(time(0));
	for (int a=1;a<6000;a++)
	{
		++D[1+rand()%6];
	}
	cout << "Face"<<setw(15)<<"Frequency"<<endl;
	for (int a=1;a<size;a++)
	{
		cout << a<< setw(15)<<D[a]<<endl;
	}
	system ("pause");
	return 0;
}
