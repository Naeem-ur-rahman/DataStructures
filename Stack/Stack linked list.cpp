#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
}*top;

class stackLinkedList{
	public:
		stackLinkedList(){
			top=NULL;
		}
		int value();
		node* create_node(int);
		void Display();
		void push();
		void pop();
	
};
int main(){
		stackLinkedList s;
	
	int c;
	    cout<< " _______________________"<<endl;
		cout<< "|    Stack LinkedList   |"<<endl;
		cout<< "|_______________________|"<<endl;
	    cout<<endl<<endl;
	while(1){ 
	cout << "1.EXIT PROGRAM"<<endl;
	cout << "2.DISPLAY"<<endl;
	cout << "3.PUSH"<<endl;
	cout << "4.POP"<<endl;
	cout <<endl;
	cout << "Enter the Choice : ";cin>>c;
	switch(c){
	case 1:
	{
		return 0;
		break;
	}
	case 2:
	{
		s.Display();
		break;
	}
	case 3:
	{
		s.push();
		break;
	}
	case 4:
	{
		s.pop();
		break;
	}
	default : 
			cout << "Wrong Input !"<<endl;
	}


}
	return 0;
}
int stackLinkedList::value(){
	int n;
	cout << "Enter a Value : ";cin>>n;
    return n;
}
node* stackLinkedList::create_node(int n){
	node* t =NULL;
	t= new node;
	if (t==NULL){
		cout << "Node is Not Created !"<<endl;
		return NULL;
	}
	else{
	t->data=n;
	t->next=NULL;
	return t;
}
} 

void stackLinkedList::push(){
		if(top==NULL){
		top = create_node(value());
	}
	else {
		
		node *t=create_node(value());	
		t->next=top;	
	    top = t;
	}
}
void stackLinkedList::pop(){
	if (top==NULL ){
		cout << "Stack LinkedList UnderFlow ! "<<endl;
	}
	else {
		top=top->next;	
	}
}
void stackLinkedList::Display(){
	node *t;
	if(top==NULL){
		cout << "Stack is Empty ! "<<endl;
	}
	else{
	cout << "Stack Likedlist Data "<<endl;
	for (t=top ; t!=NULL ; t=t->next ){
		cout << t->data<<"  ";
	}
	cout << endl;

}
}






