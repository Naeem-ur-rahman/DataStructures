#include <iostream>
using namespace std;
struct Node{
	char data;
	int priority;
	Node *next;
	Node(int d,int p){
		priority = p;
		data = d;
		next =NULL;
	}
};
class PriorityQueue{
	Node *rear;
	Node *front;
	char value(){
		char v;
		cout<< "Enter the Value : ";cin>>v;
		return v;
	}
	int priorityValue(){
		int p;
		cout <<"Enter the Priority : ";cin>>p;
		return p;
	}
	public :
		PriorityQueue(){
			front = NULL;
			rear = NULL;
		}
		
		void enqueue(){
			if(rear==NULL){
				rear = new Node(value(),priorityValue());
				front = rear;
				return;
			}
			
			Node *ptr = front;
			Node *New =new Node(value(),priorityValue()); 
			Node *save;
			if(New->priority<front->priority){
				New->next = front;
				front = New; 
				return ;
			}
			while (ptr!=NULL){
			 if(ptr->priority<=New->priority){
			 	save = ptr;
			 	ptr = ptr->next;
			 }else if(ptr->priority>New->priority){
			 	New->next = ptr;
			 	save->next = New;
			 	return;
			 }
			 
			}
	    save->next = New;	
		}
		
		
		void dequeue(){
			if(front==NULL){
				cout<< "Under Flow Queue"<<endl;
			}
			else{
				cout << "Dequeue Value is : "<<front->data<<endl;
				front = front->next;
				if(front == NULL){
					rear = NULL;
				}
			}
		}
		void peek(){
			if (front==NULL){
				cout << "Empty Queue "<<endl;
			}
			else{
				cout<< "Peek Value is : "<<front->data<<endl;
			}
		}
		void display(){
			if(front==NULL){
				cout <<"Empty Queue"<<endl;
				return ;
			}
			cout << "Queue Linked List"<<endl;
			Node *temp = front;
			while(temp!=NULL){
				cout <<"[ "<< temp->data<<" , "<<temp->priority<<" ]  ";
				temp = temp->next;
			}
			cout<<endl;
		}
};
int main(){
	PriorityQueue q ;
	int c,a;
while(1){
        cout << "1.EXIT"<<endl;
		cout << "2.ENQUEUE"<<endl;
		cout << "3.DEQUEUE"<<endl;
		cout << "4.PEEK"<<endl; 	
		cout << "5.Display"<<endl;
        cout << "Enter your Choice : ";cin>>c;
switch (c)
	{
		case 1:{
			return 0;
			break;
		}
		case 2:{
			q.enqueue();
			break;
		}
		case 3:{
			q.dequeue();
			break;
		}
		case 4:{
		    q.peek();
			break;
		}
		case 5:{
			q.display();
			break;
		}
		default :{
			cout << "Wrong Input! "<<endl;
			break;
		}
	}
  }
	return 0;
}
