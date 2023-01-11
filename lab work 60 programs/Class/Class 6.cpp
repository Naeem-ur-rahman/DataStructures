#include<iostream>
using namespace std;
class Class
{
public:
   Class() {
      cout << "Constructor of the BaseClass : Object Created"<<endl;
   }
   ~Class() {
      cout << "Destructor of the BaseClass : Object Destroyed"<<endl;
   }
};
int main (){
	Class des;
	return 0;
}
