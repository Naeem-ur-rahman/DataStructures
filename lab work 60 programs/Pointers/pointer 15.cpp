#include <iostream>
using namespace std;
int main(){
	 int s;
	 cout << "Enter the Size : ";cin>>s;
     int arr[s];
     int* ptr = arr;
	 cout<<"Enter "<<s<<" numbers separated by space ! "<<endl;
     for (int i=0;i<s;i++){
     	cin >> *(ptr+i);
	 }
     cout<<"Your entered numbers in reverse order are !"<<endl;
     for(int i=s-1;i>=0;i--)
        cout<<*(ptr+i)<<endl;
     return 0;
 
}

