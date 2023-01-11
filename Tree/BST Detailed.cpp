#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int d){
		data  = d;
		left  = NULL;
		right = NULL;
	}
};
class BST{
	Node *root;
	Node *loc;
	Node *locp;
	
	int value(){
		int v;
		cout << "Enter the Value : ";cin>>v;
		return v;
	}
	
	void find(int d){
		loc = NULL;
		locp = NULL;
		if(root==NULL){
			cout<<"Empty tree"<<endl;
			return;
		} 
		if (root->data == d){
		loc = root;
		cout<<"Value found"<<endl;
		return;
		}
		
			Node *temp , *save;
			
			if(d<root->data){
				save = root;
				temp = root->left;
			}else{
				save  = root;
				temp = root->right;
			}
			
			while(temp!=NULL){
				
				if(temp->data==d){
					locp = save;
					loc = temp;
					cout<<"Value found"<<endl;
					return;
				}
				if(d<temp->data){
					save  = temp;
					temp = temp->left;
				}
				else {
					save  = temp;
					temp = temp->right;
				}
			}
			cout<<"Value Not found"<<endl;
			locp = save;
			loc = NULL;
	}
	void postorder(Node *n){
		if(n==NULL){
			return;
		}
		postorder(n->left);
		postorder(n->right);
		cout << n->data <<"  ";
	}
	void preorder(Node *n){
		if(n==NULL){
			return;
		}
		cout<< n->data <<"  ";
		preorder(n->left);
		preorder(n->right);
	}
	void inorder(Node *n){
		if(n==NULL){
			return;
		}
		inorder(n->left);
		cout<< n->data <<"  ";
		inorder(n->right);
	}
	
	
	Node *insert(Node *n,int d){
		
		if(n==NULL){
			
			return new Node(d);
		}
		
		else
		
		{
			if(d < n->data ){
				n->left  = insert(n->left,d);
			}
			else{
				n->right  = insert(n->right,d);
			}
		}
		
		return n;
	}
	
	
	
	Node *search(int d){
		if(root==NULL){
			cout<< "No Tree in Memory"<<endl;
			return 0;
		}
		Node *temp = root;
		while( temp!=NULL  ){
			
			if(temp->data == d){
				return temp;
			}
			if(d<temp->data){
				temp = temp->left;
			}
			else{
				temp = temp->right;
			}
		}
		return NULL;
	}
	
	Node *getMinimumKey(Node* n){
		
		while (n->left!=NULL){	
        n = n->left;
    }
    
    return n;
    
	}
	
	void deleteNode(Node* root, int key)
{

    // search key in the BST and set its parent pointer
    find(key);
 
    // return if the key is not found in the tree
    if (loc == NULL) {
        return;
    }
    
    // Case 1: node to be deleted has no children, i.e., it is a leaf node
    
    if (loc->left == NULL && loc->right == NULL)
    {
        // if the node to be deleted is a root node, then set it to null
        if (loc == root)
        {
            root=NULL;
        }
        else {
        	
            if (locp->left == loc) {
                locp->left = NULL;
            }
            else {
                locp->right = NULL;
            }
        }
    }                                            
	// Case 2: node to be deleted has two children
    else if (loc->left && loc->right)
    {
        // find its inorder successor node
		Node* successor = getMinimumKey(loc->right);
        Node* curr = loc;
		// store successor value
        int val = successor->data;
        // recursively delete the successor. Note that the successor
        // will have at most one child (right child)
        deleteNode(root, successor->data);
        
		curr->data = val;
        // copy value of the successor to the current node
       
    }
 
    // Case 3: node to be deleted has only one child
    else {
    	
        // choose a child node
        Node* child ;
        
		if(loc->left){
        	child = loc->left;
		}else{
			child  =loc->right;
		}
 
        // if the node to be deleted is not a root node, set its parent
        // to its child
        
		if (loc != root)
        {
            if (loc == locp->left) {
                locp->left = child;
            }
            else {
                locp->right = child;
            }
        }
        else {
            root = child;
        }
        
    }
}
	public:
	BST(){
		root = NULL;
		loc = NULL;
		locp = NULL;
	}
	void insertTree(){
		int d = value();
		find(d);
		
		if(loc==NULL && locp==NULL){
			
			root = new Node(d);
		}
		else if(locp != NULL && loc == NULL){
		
			if(d<locp->data){
				locp->left = new Node (d);
			}
			else{
				locp->right = new Node (d);
			}
			
		}
		else{
			cout << "Value Already in Tree"<<endl;
		}
	}
	
	void insertRecurtion(){
		
	root =	insert(root,value());
	
	}
	
	
	bool searchTree(){
		Node *n  = search(value());
		if (n){
			cout<< "Value found which is : "<<n->data<<endl;
			return true;
		}
		return false;
	}
	
	void deleteTree(){
		deleteNode(root,value());
	}
	
	void traversal(){
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
				preorder(root);
				cout<<endl;
				break;
			}
			case 2:{
				cout << "In Order traversal ! "<<endl;
				inorder(root);
				cout <<endl;
				break;
			}
			case 3:{
				cout << "Post Order traversal ! "<<endl;
				postorder(root);
				cout<<endl;
				break;
			}
			default:{
				cout<< "Wrong choice ! "<<endl;
			}
		}
	}
};
int main(){
	int choice;
	BST b;
	    cout<< " _______________________"<<endl;
		cout<< "|  Binary Serach Tree   |"<<endl;
		cout<< "|_______________________|"<<endl;
	    cout<<endl<<endl;
	while(1){ 
	cout << "1.EXIT"<<endl;
	cout << "2.INSERT (FIND)"<<endl;
	cout << "3.DELETION"<<endl;	
	cout << "4.TRAVERSALS"<<endl;
	cout << "5.INSERT (RECURSTION)"<<endl;
	cout << "6.SEARCH (RECURSTION)"<<endl;				
	cout <<endl;
	cout << "Enter the Choice : ";cin>>choice;
	switch(choice){
		case 1:
	{
		return 0;
		break;
	}
	case 2:{
		b.insertTree();
		break;
	}
	case 3:{
		b.deleteTree();
		break;
	}
	case 4:{
		b.traversal();
		break;
	}
	case 5:{
		b.insertRecurtion();
		break;
	}
	case 6:{
		if(!b.searchTree()){
			cout<< "Value not Found"<<endl;
		}
		break;
	}
	default :{
	cout << "Wrong Input !"<<endl;
	}
	}

}
	return 0;
}
