#include <iostream>
using namespace std;
class prime{
	int a,k;
	public:
	prime(int x){ a=x; }
    void check (){ k=0; for(int i=2;i<a;i++){
	if(a%i==0){ k++; }	} }
    void result(){
		if(k==0){ cout<<a<<" is Prime Nmber "<<endl; }
		else{ cout<<a<<" is not Prime Number "<<endl;} }
};
int main(){
	int n;
	cout << "Enter a Number : ";cin>>n;
	prime p = prime(n);
	p.check();p.result();
	return 0;	
}
