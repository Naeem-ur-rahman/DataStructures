#include <iostream>
using namespace std;
class Area{
	float ans;
	public: 
	Area(){
		cout << "I am the Constructor with no Arrguments"<<endl;}
	Area(float r){
		ans=3.14*r*r;
		cout << "Area of Circle is : "<<ans<<endl;}
	Area(float x,float y){
		ans=x*y;
		cout << "Area of Square/Rectangle is : "<<ans<<endl;}
};
int main(){
	Area a1= Area();
	Area a2= Area(5);
	Area a3= Area(4,6);
	return 0;}
