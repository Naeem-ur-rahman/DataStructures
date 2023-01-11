#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int d){
		data = d;
		next =NULL;
	}
};
class Queue{
	Node *rear;
	Node *front;
	int value(){
		int v;
		cout<< "Enter the Value : ";cin>>v;
		return v;
	}
	public :
		Queue(){
			front = NULL;
			rear = NULL;
		}
		
		void enqueue(){
			if(front==NULL){
				front = new Node(value());
				rear =  front;
			}
			else{
				Node *temp = new Node(value());
				rear->next = temp;
				rear = temp;
			}
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
				cout << temp->data<<"   ";
				temp = temp->next;
			}
			cout<<endl;
		}
};
int main(){
	Queue q;
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
