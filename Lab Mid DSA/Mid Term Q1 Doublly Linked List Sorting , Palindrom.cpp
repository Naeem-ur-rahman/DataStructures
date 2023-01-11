#include <iostream>
using namespace std;
struct node {
	int data;
	node* next;
	node* back;
}*start,*end;
class doublly{
	public:
		doublly(){
			start=NULL;
			end=NULL;
		}
		
		node* create(int x);
		void Insert_start();
		void sort();
		void Display();
		bool palindrom();
};

int main(){
	int c;
	doublly  d;
	while(1){
	cout<<"1.INSERT AT START "<<endl;
	cout<<"2.DISPLAY"<<endl;
	cout<<"3.SORT"<<endl;
	cout<<"4.EXIT"<<endl;
	cout<<"5.PALINDROME "<<endl;
	cout << "Enter Choice : ";cin>>c;
	switch(c){
		case 1:{
			d.Insert_start();
			break;
		}
		case 2:{
			d.Display();
			break;
		}
		case 3:{
			d.sort();
			break;
		}
		case 4:{
			return 0;
			break;
		}
		case 5:{
		cout << "Linked List is Palindrome ? : "<<	d.palindrom()<<endl;
			break;
		}
		default : {
			
			cout<<"Wrong INPUT !"<<endl;
		}
	}
	}
	return 0;
}
node *doublly::create(int x){
	
	node *t = new node;
	if(t==NULL){
		cout << "Memory Error !"<<endl;
		return 0;
	}
	t->data=x;
	t->next=NULL;
	t->back=NULL;
	return t;
	
}
void doublly::Display(){
	if(start==NULL){
		cout << "No Data in LinkedList "<<endl;
	}
	else{
		node *t=start;
		while(t!=NULL){
			cout<<t->data<<"  ";
			t=t->next;
		}
		cout<<endl;
	}
}
void doublly::Insert_start(){
	int n;
	cout << "Enter the Value : ";cin>>n;
	node *t= create(n);
	if(start==NULL){
		start = t;
		end =  start;
	}
	else{
		t->next=start;
		start->back=t;
		start=t;
	}
	
}
void doublly::sort(){
	if(start==NULL){
		cout << "Empty Linked List"<<endl;
	}
	else{
		node *t,*s;
		t=start;
		int temp;
		while(t!=NULL){
			s=t->next;
			while(s!=NULL){
				
				if(t->data>s->data){
				temp=t->data;
				t->data= s->data;
				s->data=temp;	
				}
				
				s=s->next;
			}
			t=t->next;
		}
		
	}
}
bool doublly::palindrom(){
	if(start==NULL){
		cout << "Empty Linked List "<<endl;
	    return false;
	    
	}
	else{
	
	node *st= start,*en =end;
	while (st!=NULL && en!=NULL){
		if (st->data==en->data){
			
		}
		else
		{
			return false;
		}
		st = st->next;
		en = en->back;
	}
	return true;
}
}
