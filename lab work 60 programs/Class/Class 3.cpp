#include <iostream>
using namespace std;
class Myclass{
	int a,b;
	public:
	Myclass();
	void Display(){
		cout << "a  = : "<<a<<"\t  b = : "<<b<<endl;
	}
};
Myclass::Myclass(){
	cout << "In the constructor Outside the Class!"<<endl;
	a=12;
	b=20;
}
int main(){
	Myclass my;
	my.Display();
}
