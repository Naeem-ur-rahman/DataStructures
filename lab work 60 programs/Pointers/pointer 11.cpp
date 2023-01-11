#include <iostream>
using namespace std;
int main(){
	void display (char*);
	char st[] = "Winter is Coming !";
	display(st);
	return 0;
}
void display(char* ptr){
	while (*ptr){
	cout << *ptr++;	
	}
}
