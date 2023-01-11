#include <iostream>
#include <queue>
using namespace std;
struct Node {
	int data;
	Node *left;
	Node *right;
	Node(int d){
		data = d;
		left=NULL;
		right=NULL;
	}
};
class BinaryTree{
	Node* root;
	int value(){
		int n;cout<<"Enter the data : ";cin>>n;
		return n;
	}
	public:
		BinaryTree(){
			root = NULL;
		}
	void preOrder (Node * n);
	void inOrder  (Node * n);
	void postOrder(Node * n);
	void traversal();
	void insert();
};
int main(){
	
	int choice;
	BinaryTree b;
	    cout<< " _______________________"<<endl;
		cout<< "|     Binary Tree       |"<<endl;
		cout<< "|_______________________|"<<endl;
	    cout<<endl<<endl;
	while(1){ 
	cout << "1.EXIT"<<endl;
	cout << "2.INSERT"<<endl;	
	cout << "3.TRAVERSALS"<<endl;			
	cout <<endl;
	cout << "Enter the Choice : ";cin>>choice;
	switch(choice){
		case 1: {
		return 0;
	}
	case 2:{
		b.insert(); break; }
	case 3:{
		b.traversal(); break; }
	default :
	cout << "Wrong Input !"<<endl;

} }	
return 0;}
	
	void BinaryTree::traversal(){
		if(root==NULL){
			cout << "No tree in Memory !"<<endl;
			return;
		}
		int ch;
		cout << "1.PreOrder"<<endl;
		cout << "2.InOrder"<<endl;
		cout << "3.PostOrder"<<endl;
		cout << "Enter the choice : ";cin>>ch;
		switch (ch){
			case 1:{
				cout << "Pre Order traversal ! "<<endl;
				preOrder(root);
				cout<<endl;
				break;
			}
			case 2:{
				cout << "In Order traversal ! "<<endl;
				inOrder(root);
				cout <<endl;
				break;
			}
			case 3:{
				cout << "Post Order traversal ! "<<endl;
				postOrder(root);
				cout<<endl;
				break;
			}
			default:{
				cout<< "Wrong choice ! "<<endl;
			}
		}
	}
	void BinaryTree::preOrder(Node *n){
		if(n==NULL){
			return;
		}
		cout << n->data <<"  ";
		preOrder(n->left);
		preOrder(n->right);
	}
	void BinaryTree::inOrder(Node *n){
		if(n==NULL){
			return;
		}
		inOrder(n->left);
		cout<< n->data <<"  ";
		inOrder(n->right);
	}
	void BinaryTree::postOrder(Node *n){
		if(n==NULL){
			return;
		}
		postOrder(n->left);
		postOrder(n->right);
		cout<< n->data <<"  ";
	}
	void BinaryTree::insert(){
		if(root==NULL){
			root = new Node(value());
			return ;
		}
		queue<Node*> q;
		Node *n=root;
		while(n!=NULL){
		   q.push(n->left);
		   q.push(n->right);
		   if(n->left==NULL){
		   n->left=new Node(value());
		   return ;
		   }else if(n->right==NULL){
			n->right=new Node(value());
			return ;
		   }else{
			n = q.front();
			q.pop();
	       }
		}

	}
