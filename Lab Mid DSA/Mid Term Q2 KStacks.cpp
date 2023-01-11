#include <iostream>
using namespace std;
    const int s = 30;
    const int stack_range = 15;
    int arr[s];
    int part , k;
	int top[stack_range];
	int top_range[stack_range];
	int top_start[stack_range];
	void top_update();
class KStack{
	public:
	KStack(){
		
	}
	int KstackValue();
	void Display();
	void push();
	void pop ();
};
int main(){
	int c;
	
	cout<< "Enter the K Stacks in Range [0 to "<<stack_range<<"] : ";cin>>k;  // Number of Stacks from user
	
	if(k> 0 && k <= stack_range){    
		
    part = s/k;                      // Calculationg each part of Stack
    
    top_update();          // Updating the top and its range according to given data

	KStack st;                          // Object of class
	
	while(1){                        // Display and choice options
	cout<<"1.EXIT "<<endl;
	cout<<"2.PUSH"<<endl;
	cout<<"3.POP"<<endl;
	cout<<"4.DISPLAY"<<endl;
	cout<<"Enter Choice : ";cin>>c;
	switch(c){
		case 1:{
			return 0;
			break;
		}
		case 2:{
			st.push();
			break;
		}
		case 3:{
			st.pop();
			break;
		}
		case 4:{
			st.Display();
			break;
		}
		default : {	
			cout<<"Wrong INPUT !"<<endl;
		}
	}
	}
}else{
	cout<<"Invalid Range!"<<endl;
}
	
	return 0;
}


int KStack::KstackValue(){     //getting stack Number from user
	int p;
	cout<< "Enter the kth Stack : ";cin>>p;
	return p;
}


void KStack::push(){           // KStacks PUSH Function
	int p,n;
	
	p = KstackValue();
	if(p > 0 && p <= k){
		
		if(top[p-1] < top_range[p-1]-1){
			cout<< "Enter the Value : ";cin>>n;
			top[p-1]++;
			arr[top[p-1]]=n;
		}else{
			cout<< "OverFlow Stack ! : "<<p<<endl;
		}
		
    }
else {
	cout<<"Invalid Input Range"<<endl;
}

}
void KStack::pop(){                  // KStack POP Function
	int p;
	p = KstackValue();
	if(p> 0 && p <= k){
	if(top[p-1]<top_start[p-1]){
		cout<<"UnderFlow Stack ! : "<<p<<endl; 
	}	
	else{
		cout<<"Deleted Value is : "<<arr[top[p-1]]<<endl;
		arr[top[p-1]]=0;
		top[p-1]--;
	}
	
	}
	else{
	cout<<"Invalid Input Range"<<endl;
}
	
}
void KStack::Display(){      //Display Function for Checking the Woring or Dry Running of Programs data
	
	for(int i=0;i< k;i++){
		cout <<"[ "<< top_start[i]<<"  to " <<top_range[i]<<" ]  ";
	}
	cout<<endl<<"    ";
	
	for(int m=0;m<k;m++){
		cout<<top[m]<<"            ";
	}
	cout<<endl;
	
	for( int j=0 ; j < s; j++){
		
		cout<<arr[j]<<"  ";
	}
	cout<<endl;

}

void top_update(){
	
	int tf =    0 ; 
	int tl = part ;
	
	for(int i= 0; i< k ; i++){
		
		top_start[i]=tf; // Top start points  For Example : 0
		
		top[i] = tf-1;  // Top at starting condition for Example : top = -1
		
		top_range[i] = tl;  // Top last Values For Example : size of Array
		
		tl = tl + part;
		tf = tf + part;
	}
}
