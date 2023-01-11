#include <iostream>
using namespace std;
	struct node{
	int data;
	node *left;
	node *right;
	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
	};
	
class BinaryTree{
	public:
	node *root;
	void postorder(node *n){
		if(n==NULL){
			return;
		}
		postorder(n->left);
		postorder(n->right);
		cout << n->data <<"  ";
	}
	void preorder(node *n){
		if(n==NULL){
			return;
		}
		cout<< n->data <<"  ";
		preorder(n->left);
		preorder(n->right);
	}
	void inorder(node *n){
		if(n==NULL){
			return;
		}
		inorder(n->left);
		cout<< n->data <<"  ";
		inorder(n->right);
	}
	
};
	

int main(){
	BinaryTree b;
	b.root = new node(1);
	b.root->left = new node(2);
	b.root->right = new node(3);
	b.root->left->left = new node(4);
	b.root->left->right = new node(5);
	b.root->right->left  = new node(6);
	b.root->right->right = new node(7);
	cout<<"Pre Order is ! "<<endl;
	b.preorder(b.root);
	cout<<endl;
	cout<<"In Order is ! "<<endl;
	b.inorder(b.root);
	cout<<endl;
	cout<<"Post Order is ! "<<endl;
	b.postorder(b.root);
	cout<<endl;
	return 0;
}
