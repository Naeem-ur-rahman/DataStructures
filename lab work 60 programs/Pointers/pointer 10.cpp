#include<iostream>
using namespace std;
int main(){

  int s; 
  cout <<"Enter Size :";cin >>s;
  cout <<"Enter "<<s<<" values in array  "<<endl;
  int arr[s];
  for(int i=0;i<s;i++) {
   cin>>arr[i];
  }
  int max = arr[0];
  for(int i=0;i < s;i++){
   if (arr[i]>max)
     max=arr[i];
  }
  int *ptr = &max ;
  cout <<"Largest integer value in the array is "<<*ptr;

  return 0;
}
