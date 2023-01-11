#include <iostream>
using namespace std;
struct node {
	int data;
	node* next;
	node* back;
};
class DobbleyLinkedList{
	node * start,* end;
	public:
		DobbleyLinkedList(){
			start =NULL;
			end=NULL;
		}
		int value();
		node* create_node(int n);
	    void insert_at_start();
		void insert_at_end();
		void display();
		int  count_node();
		void delete_at_start();
		void delete_at_end();
		void sort_bubble();
		void inser_multiple();
		void insert_sorted();
		void insert_pos();
};

int main(){
	DobbleyLinkedList l;
	
	int c;
	    cout<< " _______________________"<<endl;
		cout<< "|   Doubley LinkedList  |"<<endl;
		cout<< "|_______________________|"<<endl;
	    cout<<endl<<endl;
	while(1){ 
	cout << "01.EXIT PROGRAM"<<endl;
	cout << "02.DISPLAY"<<endl;
	cout << "03.INSERT AT FIRST"<<endl;
	cout << "04.INSERT AT END"<<endl;
	cout << "05.INSERT SORTED LIST"<<endl;
	cout << "06.DELETE AT START"<<endl;
	cout << "07.DELETE AT END"<<endl;
	cout << "08.SORTING LINKED LIST"<<endl;
	cout << "09.INSERT MULTIPLE NODES"<<endl;
	cout << "10.COUNT NODES IN LINKED LIST"<<endl;
	cout << "11.INSERT AT POSITION"<<endl;
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
		l.display();
		break;
	}
	case 3:
	{
		l.insert_at_start();
		break;
	}
	case 4:
	{
		l.insert_at_end();
		break;
	}
	case 5:{
		l.insert_sorted();
		break;
	}
	case 6:{
		l.delete_at_start();
		break;
	}
	case 7:{
		l.delete_at_end();
		break;
	}
	case 8:{
		l.sort_bubble();
		break;
	}
	case 9:{
		l.inser_multiple();
		break;
	}
	case 10:{
		cout << "Number of Nodes are : "<<l.count_node()<<endl;
		break;
	}
	case 11:{
		l.insert_pos();
		break;
	}
			default : 
			cout << "Wrong Input !"<<endl;
	}

}
	return 0;
}
int DobbleyLinkedList::value(){
	int n;
	cout << "Enter a Value : ";cin>>n;
    return n;
}
node* DobbleyLinkedList::create_node(int n){
	node* t =NULL;
	t= new node;
	if (t==NULL){
		cout << "Node is Not Created !"<<endl;
		return NULL;
	}
	else{
	t->data=n;
	t->back=NULL;
	t->next=NULL;
	return t;
}
} 

void  DobbleyLinkedList::display(){
	node *t;
	if(start==NULL){
		cout << "Linked List is Empty ! "<<endl;
	}
	else{
	cout << "Doubly Linked List Data "<<endl;
	for (t=start ; t!=NULL ; t=t->next ){
		cout << t->data<<"  ";
	}
	cout << endl;
	cout << "Doubly Linked List Data reverse "<<endl;
	for (t=end ; t!=NULL ; t=t->back ){
		cout << t->data<<"  ";
	}
	cout <<endl;

}
}
void DobbleyLinkedList::insert_at_start(){
	if(start==NULL && end==NULL){
		start = create_node(value());
		end=start;
	}
	else {
		
		node *t=create_node(value());	
		
		t->next=start;
		start->back=t;	
	    start = t;
	}
	
}
void DobbleyLinkedList::insert_at_end(){
	if(start==NULL && end==NULL){
		start = create_node(value());
		end=start;
	}
	else {
		node *t=create_node(value());
		
		end->next=t;
		t->back=end;
		end=t;
		end->next=NULL;	
	}
}
int DobbleyLinkedList::count_node(){
	int n=0;
	node *t;
	for (t=start ; t!=NULL ; t=t->next ){
		n++;
	}
	return n;
}
void DobbleyLinkedList::delete_at_start(){
	if (start==NULL && end==NULL){
		cout << "Linked List UnderFlow ! "<<endl;
	}
	else if(start==end){
		start=NULL;
		end=NULL;
	}
	else {
		start=start->next;
		start->back=NULL;	
	}
	
}
void DobbleyLinkedList::delete_at_end(){
		if (start==NULL && end==NULL){
		cout << "Linked List UnderFlow ! "<<endl;
	}
	else if(start==end){
		start=NULL;
		end=NULL;
	}
	else {
		end=end->back;
		end->next=NULL;	
	}
	
}
void DobbleyLinkedList::sort_bubble(){
	if(start==NULL){
		cout << "Empty Linked List "<<endl;
	}
	else{
		node   *t, *s;
		int temp , check;
		s = start;
		
		while( s != NULL){
	         
			 t = s->next;
			 check = 0;
			
			while( t != NULL){
			
			if ( s->data > t->data ) {				
				temp = s->data;
				s->data = t->data;
				t->data = temp;
				
				check++;
			}
			t = t->next;	
			}
			
			if(check == 0){
				return ;
			}
			s = s->next;
		}
	}
}
void DobbleyLinkedList::insert_sorted(){
	
	if(start==NULL){
		start = create_node(value());
		end = start;
	}
	else {
		int v = value();
		node *New =  create_node(v); 
		node *t=start;
	if( t->data > v){
		    New->next=start;
			New->back=start->back;
			start->back = New;
			start = New;
		
	} else {
		while(t!=NULL){
			if( t->data > v){
				break;
		}	    	
	     t=t->next;
	    }
	    if(t==NULL){
	    	t=end;
	    	New->back=t;
	    	New->next=t->next;
			t->next=New;
			end = New;
		}
		else{
			t=t->back;
			New->back=t;
	    	New->next=t->next;
			t->next=New;
			New->next->back=New;
		}
	
	}
	
	}
}
void DobbleyLinkedList::inser_multiple(){
    int n;
	cout << "Enter Number of Nodes to create : ";cin>>n;
	if(n >= 0){
	while( n!=0){
		insert_at_end();
		n--;
	}
	}
	else{
		cout << "Invalid Input "<<endl;
	}
	
}
void DobbleyLinkedList::insert_pos(){
	int p=0,s;
	
	cout << "Enter the position : ";cin>>p;
	s=count_node();
	if ( s+1 >= p && p>0)
	{
		node *t = start;
		node *temp = create_node(value());
		int pcheck = 1;
		if(start==NULL){
			start = temp;
			end = start;
			
		} else if (p==1){
			
			temp->next=start;
			start->back=temp;
			start=temp;
		}
		else if(p == s+1){
			temp->back=end;
			end->next=temp;
			end=temp;
		}
		else{
			
		while (t != NULL && pcheck<p-1){
			t=t->next;
			pcheck++;
		}
		temp->back=t;
		temp->next=t->next;
		t->next->back=temp;
		t->next=temp;
	}
}
	else{
		cout<<"Position is Invalid !"<<endl;	
	}
	
}
