#include <iostream>
using namespace std;
struct node{
	int data;
	node* next;
};

class LinkedList{
	node *start;
	public:
		LinkedList(){
			start=NULL;
		}
		
		node* create_node(int);	
		void insert_start(); 
		void display();
		void insert_end();
		void linear_search();
		int  count_node();
		void sort_bubble();
		void insert_after_given_node_num();
		void insert_sorted_list();
		void delete_pos();
		void reverse_list();
};
int main(){
	int ch=0;
	char c;
	
	LinkedList l;
	    cout<< " _______________________"<<endl;
		cout<< "|  SINGLY LINKED LIST   |"<<endl;
		cout<< "|_______________________|"<<endl;
	    cout<<endl<<endl;
	while(1){ 
	cout << "1.Display"<<endl;
	cout << "2.Insert at Start"<<endl;
	cout << "3.Insert at End"<<endl;	
	cout << "4.Sortion Assending"<<endl;		
	cout << "5.Linear Search"<<endl;		
	cout << "6.Count Nodes"<<endl;		
	cout << "7.Insert after given no of nodes"<<endl;
	cout << "8.Insert In Sorted List"<<endl;
	cout << "9.Delete Node at Position"<<endl;
	cout << "10.Revesr Linked List"<<endl;
	cout << "11.EXIT PROGRAM"<<endl;
	cout <<endl;
	cout << "Enter the Choice : ";cin>>ch;
	switch(ch){
		case 1:
	{
		l.display();
		break;
	}
	case 2:{
		l.insert_start();
		break;
	}
	case 3:{
		l.insert_end();
		break;
	}
	case 4:{
		l.sort_bubble();
		break;
	}
	case 5:{
		l.linear_search();
		break;
	}
	case 6:{
		cout << "Number of Nodes are : "<<l.count_node()<<endl;
		break;
	}
	case 7:{
		l.insert_after_given_node_num();
		break;
	}
	case 8:{
		l.insert_sorted_list();
		break;
	}
	case 9:{
		l.delete_pos();
		break;
	}
	case 10:{
		l.reverse_list();
		break;
	} 
	case 11:{
		return 0;
		break;
	}
	default : 
		cout << "Wrong Input !"<<endl;
	}
} return 0;}

node* LinkedList::create_node(int v){
	struct node *temp,*s;
	temp = new (struct node);
	if (temp == NULL){
	cout << "Memory is not Allocated !"<<endl;
	return 0;
	}
	else{
	temp->data=v;
	temp->next=NULL;
	return temp;
	}
}

void LinkedList::insert_start(){
	int n;
	cout << "Enter the value to insert at Start : ";cin>>n;
	struct node *temp,*s;
	temp = create_node(n);
	if (start==NULL){
		start= temp;
	}
	else{
		s = start;
		start=temp;
	    start->next = s ;
	}
	
}
void LinkedList::display(){
	struct node *temp;
	temp = start;
	cout << "Linked List is !"<<endl;
	
	if (start==NULL){
		cout << "There is no LinkedList in Data"<<endl;
	}
	else{
		
	 while(temp!=NULL){
		cout << temp->data<<"  ";
		 temp = temp->next;
	}
	}
	cout <<endl;
}
void LinkedList::insert_end(){
	int v;
	cout << "Enter the value to Insert at End : ";cin>>v;
	struct node *temp,*s;
	temp = create_node(v);
	s=start;
	if (start==NULL){
		start=temp;
	}
	else{
	while (s->next!=NULL){
		s=s->next;
	}
	s->next=temp;
   }
}
void LinkedList::linear_search(){
	int n,c=0,ps=0;
	struct node *temp;
	cout << "Enter Value to Search : ";cin>>n;
	if(start==NULL){
		cout << "LinkedList is Empty !"<<endl;
	}
	else{
		temp=start;
		ps=0;c=0;
		while (temp!=NULL){
			ps++;
			if(temp->data == n){
				cout << temp->data << " : is in the Linked List at Postion : "<<ps<<endl;
				c=1;break;
			}
			else{
				temp=temp->next;
			}
		}
		if (c==0){
			cout << "Number is Not found "<<endl;
		}
	}
}
int LinkedList::count_node(){
	
	if (start==NULL){
		return 0;
	}
	else {
	node *temp=start;
	int n=0;
	while(temp!=NULL){
		n++;
		temp=temp->next;
	}	
	return n;
	}
}
void LinkedList::sort_bubble(){
	int s = count_node();
	if(s==0){
		cout << "List is Empty"<<endl;
	}
	else{
		node *loc, *locn ;
		int d;
		
	for(int i=0;i<s-1;i++){
		loc = start;
		locn = start->next;
	
		for(int j=1;j < s-i;j++){
			
			if(loc->data > locn->data){
				d=loc->data;
				loc->data=locn->data;
				locn->data=d;
			}
			loc = loc->next;
			locn = locn->next;
		}
	}
	cout << "Sorted ";
	display();
}	
}
void LinkedList::insert_after_given_node_num(){
	int n,s,v;
	node *New;
	cout << "Enter Insertion position of node : ";cin>>n;
	cout<< "Enter the Value to Input : ";cin>>v;
	s=count_node();
	
	if(n>s+1){
		cout << "Error to Insert at that point"<<endl;	
	}
	else if (start==NULL){
		New = create_node(v);
		start=New;
	}
	else if (start!=NULL && n==1){
		New = create_node(v);
		New->next=start;
		start=New;
	}
	else if(n>1){
	
		node *temp,*New,*locp;
		temp=start;locp=NULL;
		
		for(int a=1;a<n;a++){
			locp=temp;
			temp=temp->next;
		}
		New= create_node(v);
		locp->next=New;
		New->next=temp;
	}
}
void LinkedList::insert_sorted_list(){
	int v;
	cout << "Enter the value : ";cin>>v;
	if(start==NULL){
		
		start=create_node(v);
	}
	else {
		node *temp,*locp,*New;
		New = create_node(v);
		temp=start;
		locp=NULL;
		while(temp!=NULL){
			if(start->data>=v){
				New->next=start;
				start=New;
				temp=NULL;
			}
			else if(temp->next==NULL){
				temp->next=New;
				New->next=NULL;
				temp=NULL;
			}
			else if(temp->data >= v ){
				New->next=temp;
				locp->next=New;
				temp=NULL;
			}
			
			else{			
			locp=temp;
			temp=temp->next;
			}
		}	
	}
}
void LinkedList::delete_pos(){
	
	if(start==NULL){
		cout << "Linked List Is Empty !"<<endl;
	}
	else{
		int p,s;
		s=count_node();
		cout << "Enter Position to Delete : ";cin>>p;
		if(p>s){
			cout << "Error to Delete ! "<<endl;
		}
		else if(p==1){
			start=start->next;
		}
		else {
			node *temp,*locp=NULL;
			temp=start;
				for (int i=1;i<p;i++){
					locp=temp;
					temp=temp->next;
				}
				locp->next=temp->next;
				
		}
	}
}
void LinkedList::reverse_list(){
	int s=count_node();
	if(s==0){
		cout << "There is no Linked list in Data !"<<endl;
	}
	else if(s==1){
		return ;
	}
	else {
		int arr[s],a=0;
		node *temp;
		temp=start;
		while (temp!=NULL){
			arr[a]=temp->data;
			temp=temp->next;
			a++;
		}
		temp=start;
		for(int i=s-1;i>=0;i--){
			temp->data=arr[i];
			temp=temp->next;
		}
		
		
	}
}
