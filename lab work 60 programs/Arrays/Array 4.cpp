#include<iostream>
using namespace std;
int main() {
    int i,j,temp,size;
    cout<<"Enter array size : "; cin>>size;
    int a[size];
	for(i=0; i<size; i++){
    cout<<"Enter arr["<<i<<"] Element : ";cin>>a[i]; }
    cout<<"Stored Data Before Sorting In Array  "<<endl;
  for(i=0;i<size;i++) {
  cout<<" "<<a[i]<<" "; }
 for(i=0;i<size;i++){
     for(j=0;j<size-i-1;j++) {
         if(a[j]>a[j+1]) {
    temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;} } }
  cout<<endl<<"Stored Data After Sorting In Array \n";
 for(i=0;i<size;i++) {
  cout<<" "<<a[i]<<" "; }
  cout<<endl; return 0;}
