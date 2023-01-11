#include<iostream>
using namespace std;
int main(){
int size; cout<<"Enter array size : ";cin>>size;
    int arr[20],even[20],odd[20],j=0,k=0;
    for(int i=0; i<size; i++) {
    cout<<"Enter arr["<<i<<"] Element : "; cin>>arr[i]; }
    cout<<"Stored Data in Array "<<endl;
   for(int i=0;i<size;i++) { cout<<" "<<arr[i]<<" "; }
   for(int i=0; i<size;i++) {
   if(arr[i]%2==0) { even[j]=arr[i]; j++; }
   else { odd[k]=arr[i]; k++; } }
  cout<<endl<<"Even Elements in Array are "<<endl;
  for(int i=0; i<j ;i++){ cout<<" "<<even[i]<<" "; }
  cout<<endl<<"Odd Elements in Array are "<<endl;
  for(int i=0; i<k; i++) { cout<<" "<<odd[i]<<" "; }
  return 0;}
