#include <iostream>
using namespace std;
struct item
{
	char  Name[100];
	int   qty;
	float price;
	float amount;
};
int main(){
	struct item i;
	struct item *ptr;
    ptr = &i;
    cout<<"Enter product name : ";cin.getline(ptr->Name,100);
	cout<<"Enter price : ";cin>>ptr->price;
	cout<<"Enter quantity : ";cin>>ptr->qty;
    ptr->amount = (float) ptr->qty * ptr->price;
	
	cout<<"Product Name     : "<<ptr->Name<<endl;
	cout<<"Product Price    : "<<ptr->price<<endl;
	cout<<"Product Quantity : "<<ptr->qty<<endl;
	cout<<"Total Amount     : "<<ptr->amount<<endl;
	return 0;
}
