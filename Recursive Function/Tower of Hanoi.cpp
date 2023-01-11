#include <iostream>
using namespace std;
void toh(int,char,char,char);
int main(){
	int n;
	cout << "Enter the Number of Disks : ";cin>>n;
	
	toh(n,'A','B','C');
	
	return 0;
}
void toh(int n, char beg, char aux, char end){
	
	if(n>=1){
		toh(n-1,beg,end,aux);
		cout << n << " Disk is moved "<<beg <<" to "<<end<<endl;
		toh(n-1,aux,beg,end);
	}	
}

