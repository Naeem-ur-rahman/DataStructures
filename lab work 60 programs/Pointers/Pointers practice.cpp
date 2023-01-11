#include <iostream>
using namespace std;
int main(){
	
	int var1 = 1;
	int var2 = 2;
	long var3 = 3;
	
	int * pint ; // pointer to interger
	
	pint = &var1; // assigning the address of var1 to pointer 'p'
	
	cout << pint << endl; // printing the address from pointer;
	
	pint = &var2; // assigning same pointer the other variable address
	
	cout<< *pint<<endl; // Printing value from pointer pointing towards the address
	
	
	long * plong; // pointer to long
	
	void * pvoid; //pointer for void it doesnt access the value from address just print the adress
	cout << "===================================================="<<endl;
	 
	pint  = & var1; 
	pvoid = & var1; 
	cout << "value is : "<< *pint<<"  at Adress : "<< pvoid<<endl;
	pint  = & var2;
	pvoid = & var2;
	cout << "value is : "<< *pint<<"  at Adress : "<< pvoid<<endl;
	plong = & var3;
	pvoid = & var3;
	*plong = 33; // assiging the value to the varrablie through the pointer
	cout << "value is : "<< *plong<<"  at Adress : "<< pvoid<<endl;
	cout << "===================================================="<<endl;
	
	
	// All pointers have same size depending upon the Computer architecth
	// 32 bit has 4 bytes of pointer and 64 has 8 bytes of pointer 
	
	
}
