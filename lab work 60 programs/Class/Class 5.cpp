#include <iostream>
using namespace std;
class height{
	private :
	int feet; float inches;
	public :
	height() : feet(0),inches(0.0){  }
	void get_input(){
	cout << "Enter the Height Data !"<<endl;
	cout << "Enter Feets : ";cin>>feet;
	cout << "Enter Inches : ";cin>>inches; }
void show() { cout<< "Height is : "<<feet<<'\''<<inches<<'\"'<<endl; }
void add_heights(height,height); };
void height::add_heights(height a1,height a2) {
	feet =a1.feet+a2.feet;
	inches=a1.inches+a2.inches;
	if (inches>=12) { inches -=12;feet++; } }
int main () {
	height h1,h2;h1.get_input();h2.get_input();
	h2.add_heights(h1,h2);
	h2.show(); h1.show();	
	return 0;}
