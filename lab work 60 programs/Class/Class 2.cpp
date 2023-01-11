#include <iostream>
#include <string>
using namespace std;
class calculate{
	float x,y;
	public: 
	calculate(float a,float b){x=a;y=b;}
	float sum(){ return x+y; }
	float sub(){ return x-y; }
	float mul(){ return x*y; }
	float div(){ return x/y; }
};
int main(){
	float i,j;char c;string ch;
	do{
	cout << "Enter the x : ";cin>>i;
	cout << "Enter the y : ";cin>>j;
	cout << "Select the operation *,/,+,-  : ";cin>>c;
	calculate cl = calculate(i,j);
	switch (c){
		case '+' : cout << "Addition    is : "<< cl.sum()<<endl;break;
		case '-' : cout << "Subtraction is : "<< cl.sub()<<endl;break;
		case '/' : cout << "Divition    is : "<< cl.div()<<endl;break;
		case '*' : cout << "Multiply    is : "<< cl.mul()<<endl;break;
		default  : cout << "Wrong Choice ! "<<endl;
	}
	cout << "If you want to use again type 'Yes '  : ";cin>>ch;
}while (ch=="yes");
	return 0;
}
