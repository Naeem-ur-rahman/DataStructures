#include <iostream>
using namespace std;
int main(){
	int size=0;
	cout << "Enter the size of Array : ";
	cin>>size;
	int arr[size];
	for (int a =0;a<size;a++){
		cout << "Enter "<<a+1<<" value : ";
		cin>>arr[a];
	}
	int min=0,max=0;
	cout << "Enter the Minimum Range for the Array Values : ";
	cin >>min;
	cout << "Enter the Maximum Range for the Array Values : ";
	cin >> max;	
	int cng;
	int c;
	for(int a=0;a<size;a++){		
		
		if(arr[a]<min || arr[a]>max){
			
			cout << "Enter value at position "<<a+1<< " in Range of "<<min<<"___"<<max<<" : ";
		    cin>>cng;
		    c=0;
		    for(int b=0; b<=23 ;b++){ 	 
				
				 if(cng<min || cng>max){
		    		cout<<"Error Value ! "<<endl;
					cout << "Enter value at position "<<a+1<< " in Range of "<<min<<"___"<<max<<" : ";
					cin>>cng;
				}
				
				if(cng > min || cng < max){
					b=24;
				}	}
			arr[a] = cng;			
			}	
		}
		
	cout <<"Array is "<<endl;
			for(int a=0;a<size;a++){
				cout<<arr[a]<<"  ";
			}
			cout << endl;
}
