#include <iostream>
#include <iomanip>
using namespace std;
class employee{
	int num; float dollar;
	public :
	employee() : num(0),dollar(0) {	}
	void input(){
	cout<< "Enter Employee Number   : ";cin>>num;
	cout<< "Enter compensation in $ : ";cin>>dollar; }
void display() {
	cout<<setw(20)<<setiosflags(ios::left)<<num<<setw(30)<<setiosflags(ios::left)<<dollar<<endl; } };
void line () {
	for (int a=1;a<=40;a++) {  cout <<"-";	}
    cout<<endl; }
int main () {
	employee a,b,c;
    a.input(); b.input();
	c.input(); line();
    cout<<setw(20)<<setiosflags(ios::left)<< "Employee Number "<<setw(30)<<setiosflags(ios::left)<<"Employee Compenstion"<<endl;
    line (); a.display();
    b.display(); c.display();
    line(); return 0; }
