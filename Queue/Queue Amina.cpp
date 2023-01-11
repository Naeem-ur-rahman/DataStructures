#include<iostream>
using namespace std;
class Queue {
	int front;
	int rare;
	int *arr;
	int size;
	public:
		Queue(){
			size = 5;
			arr = new int [size];
			front =-1;
			rare =-1;
		}
		Queue(int s){
			size =s;
			arr = new int [size];
			front =-1;
			rare =-1;
		}
		void display();
		void enqueue(int v);
		void dequeue();
		void peek();
};
int main() {
    Queue q;
	int c,a;
     while(1){
        cout << "1.EXIT"<<endl;
		cout << "2.INSERTION"<<endl;
		cout << "3.DELETION"<<endl;
		cout << "4.PEEK"<<endl; 	
		cout << "5.DISPLAY"<<endl;
        cout << "Enter your Choice : ";cin>>c;
       switch (c) {
		case 1:{
			return 0;
			break; }
		case 2:{
			cout << "Enter Value : ";cin>>a;
			q.enqueue(a);
			break; }
		case 3:{
		    q.dequeue();
			break; }
		case 4:{
		    q.peek();
			break; }
		case 5:{
			q.display();
			break; }
		default :
			cout << "Wrong Input! "<<endl;
	} }
 return 0;}
		void Queue::enqueue(int v){
			
		  if ( ( front==0 && rare == size-1 ) ||  front == rare+1 )
			{
				cout<<"Over flow "<<endl;
				return ;
			}
			else if(front== -1 && rare== -1){
				front=0;
				rare =0;
				arr[rare]=v;
				}
			else if (front!=0 && rare == size-1){
				rare = 0;
				arr[rare]=v;
			} 
			
			else{				
			    rare++;
				arr[rare]=v;
			}
			
		}
		void Queue::dequeue()
		{
			if(front == -1 && rare == -1)
			{
				cout<<"underflow "<<endl;
			} else if(front == rare){
				front =-1;
				rare=-1;
			} else if( front == size-1 && rare == 0 ){
				front=rare;
			} else if (front == size-1 && rare != 0){
				front=0;
			} else {
				front++; }
}
		
	    void Queue::peek(){
			if ( front == - 1 ) {
				cout<<"Empty Queue !"<<endl;
			} else {
				cout<<"Value at Peek is : " <<arr[front]<<endl;}
}
		void Queue::display(){
			if(front==-1 && rare==-1){
				cout << "Empty Queue"<<endl; return; }
			for(int i=0;i<size;i++){
				cout<< arr[i]<<"  "; }
			cout<<endl;
			cout << "Front is : "<<front+1<<endl;
			cout << "Rear  is : "<<rare+1<<endl;
}
