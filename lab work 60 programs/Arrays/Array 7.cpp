#include<iostream>
using namespace std;
int main(){
	int size;cout<<"Enter array size : ";
    cin>>size;
   int i,a[size],no,pos;
    for(i=0; i<size; i++){
    cout<<"Enter arr["<<i<<"] Element : ";cin>>a[i];}
   cout<<endl<<"Stored Data in Array : "<<endl;
  for(i=0;i<size;i++){cout<<" "<<a[i]<<" ";}
  cout<<endl<<"Enter position to Delete number : ";cin>>pos;
  if(pos>size){
    cout<<"This is out of range.";}
  else{ --pos;
   for(i=pos;i<=size-1;i++){
    a[i]=a[i+1]; }
   cout<<"New Array is : "<<endl;
  for(i=0;i<size-1;i++){
    cout<<" "<<a[i]<<" "; }}cout<<endl;
  return 0;}
