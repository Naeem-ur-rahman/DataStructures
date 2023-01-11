#include <iostream>
using namespace std;
int value(){  // Function for taking value from user
	int v;
	cout<< "Enter a Value : ";cin>>v;
	return v;
}
class Stack_Array{
	int s;
	int *arr;
	int top;
	public:
		Stack_Array(int size){ // constructor of Class
		s=size;
		arr = new int(s);  // dynamic allocation of array
		top = -1;	
		}
		Stack_Array(){     // default constructor
			s = 5;
			arr = new int(s);
		    top = -1;
		}
		void push (int v);  // pusing value in stack
	    int peek();         // give the top value
	    void display();    // Display all Stack
	    int pop ();        // delete value from top
};
int main(){
	Stack_Array s ;
	int ch=0;
	char c;
	    cout<< " _______________________"<<endl;
		cout<< "|      STACK ARRAY      |"<<endl;
		cout<< "|_______________________|"<<endl;
	    cout<<endl<<endl;
	while(1){ 
	cout << "1.EXIT"<<endl;
	cout << "2.PUSH"<<endl;
	cout << "3.POP"<<endl;
	cout << "4.PEEK"<<endl;
	cout << "5.DISPLAY"<<endl;
	cout <<endl;
	cout << "Enter the Choice : ";cin>>ch;
	switch(ch){
		case 1:{
	    return 0;
		break;
	}
	case 2:{
		s.push(value());
		break;
	}
	case 3:{
		cout << "Pop Value is : "<<s.pop()<<endl;
		break;
	}
	case 4:{
		cout<< "Peek Value is : "<<s.peek()<<endl;
		break;
	}
	case 5:{
		s.display();
		break;
	}
	default : 
	cout << "Wrong Input !"<<endl;
	}
}
return 0; }

void Stack_Array::display(){
	if (top==-1){
		cout << "Empty Stack ! "<<endl;
	}
	else{
	cout << "Stack is "<<endl;
	for (int i = 0;i <= top; i++ ){
		cout << arr[i]<<"  ";
	}
	cout <<endl<<endl; }
	}

void Stack_Array::push(int v) {
	if(top >= s-1){
		cout << "OverFlow Stack ! "<<endl;
	} else {
	top++;
	arr[top] = v; }       
}

int Stack_Array::pop() {
	if(top <= -1){
		cout << "UnderFlow Stack ! "<<endl;
	}
	else{
		int n = arr[top];
	    top--;
		return n;	
		}
}
int Stack_Array::peek(){
	return arr[top];
}


