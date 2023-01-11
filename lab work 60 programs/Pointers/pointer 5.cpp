#include <iostream>
using namespace std;
int main(){
	
	int x,y,*xptr,*yptr;
	xptr=&x; yptr=&y;
	cout << "Enter First Number : "; cin>>*xptr;
	cout << "Enter the Second Number : "; cin>>*yptr;
	cout << "Sum of Numbers is : "<<*xptr+*yptr<<endl;
	
	system("pause");
	return 0;
}
