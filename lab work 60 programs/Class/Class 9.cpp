#include <iostream>
using namespace std;
class Int{
	private:
	int i;	
	public:
	Int (){
		i=0;
	} 	
	Int (int i1)
	{
		i=i1;
		}	
		void add(Int a1,Int a2)
		{
			i=a1.i+a2.i;
		}
		void display()
		{
			cout << "Value Stored in i = "<<i<<endl;
		}
}; 
int main()
{
	int a,b;
	cout<<"Enter 1st Integer : ";cin>>a;
	cout<<"Enter 2nd Integer : ";cin>>b; 
	Int Int1(a);
	Int Int2(b);
	Int Int3;
	Int3.add(Int1,Int2);
	cout<<"(Int 1) : ";Int1.display();
	cout<<"(Int 2) : ";Int2.display();
	cout<<"(Int 3) : ";Int3.display();
	return 0;
}
