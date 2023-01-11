#include<iostream>
using namespace std;
int main() {
	int size; cout<<"Enter array size : "; cin>>size;
	int i,a[size],no,pos;
    for(i=0; i<size; i++) {
    cout<<"Enter arr["<<i<<"] Element :: "; cin>>a[i]; }
    cout<<"\nStored Data in Array  \n";
  for(i=0;i<size;i++) {cout<<" "<<a[i]<<" ";}
  cout<<"\nEnter position to insert number : "; cin>>pos;
  if(pos>size) { cout<<"This is out of range."; }
  else {
    cout<<"Enter number to be inserted : "; cin>>no; --pos;
   for(i=size;i>=pos;i--) { a[i+1]=a[i]; }
   a[pos]=no;
    cout<<"New Array is :\n";
  for(i=0;i<size+1;i++) { cout<<" "<<a[i]<<" "; }
   }
  cout<<"\n";
  return 0;
  }
