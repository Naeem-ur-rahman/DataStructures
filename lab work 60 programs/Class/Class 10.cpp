#include <iostream>
#include <conio.h>
using namespace std;
const char ESC = 27;
const double Toll=0.50;
class tollbooth{
	unsigned int car; double amount;
	public:
	tollbooth():car(0),amount(0){  }
	void payingCar() { car++; 	amount+=Toll; }	
	void nonpayCar(){ car++; amount+=0; }
	void display() const {
		cout << "Total Cars   Passed    : "<<car<<endl;
		cout << "Total Amount Collected : "<<amount<<endl; }
};
int main() {
	char c; tollbooth t;
	cout<< "Enter 1 for Paying car "<<endl;
	cout<< "Enter 0 for Nonpaying car"<<endl;
	cout<< "Enter ESC for Exist Program "<<endl;
	do{ cout << "Enter : "; c = getche();cout << endl;
	if (c=='1'){ t.payingCar(); }
    if (c=='0'){ t.nonpayCar(); } } while(c!=ESC);
    t.display();
	return 0;}
