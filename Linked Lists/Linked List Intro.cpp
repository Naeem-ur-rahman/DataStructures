#include <iostream>
using namespace std;
void menu();
struct node{
	int data;
	node *next;
}*start;

class Linkedlist{
	public:
	Linkedlist(){
		start=NULL;
	}		
	node* create_node(int);
	void display();
	void insert ();
};
int main(){
	int ch;
	char c;
	Linkedlist s;
	do{
	
	menu();
	cout << "Enter Your Choice : ";cin>>ch;
	switch(ch){
		case 1:
			{
				s.display();
				break;
			}
		case 2:
			{
				s.insert();
				break;	
			}
		default :
			{
				cout << "Wrong Input ! "<<endl;
			}
	}
	cout << "Do You Want to continue : ";cin>>c;
}while(c=='y');
     return 0;
}

void menu(){
	cout << endl;
	cout << "1.Display List"<<endl;
	cout << "2.Insert into List"<<endl;
	cout << endl;
}
node* Linkedlist::create_node(int value){
	node *temp,*s;
	temp = new (node);
	if(temp==NULL){
		cout << "Memory is not Allocated ! "<<endl;
		return 0;
	}
	else{
		temp->data=value;
		temp->next=NULL;
		return temp;
	}
}
void Linkedlist::display(){
	node *temp;
	temp=start;
	if (start==NULL){
		cout << "Linked List is Empty !"<<endl;
	}
	else{
		while(temp!=NULL){
			cout << temp->data <<"  ";
			temp=temp->next;
		}
		cout <<endl;
	}
}
void Linkedlist::insert(){
	int v;
	node *temp,*s;
	cout << "Enter the value to Insert : ";cin>>v;
	temp = create_node(v);
	if(start==NULL){
		start=temp;
	}
	else{
		s=start;
		while(s->next!=NULL){
			s=s->next;
		}
		s->next=temp;
	}
}
