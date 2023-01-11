#include <iostream>
using namespace std;
void Reverse_Array(int array[],int size);
int main() {
    int i,size;
    cout<<"Enter array size : "; cin>>size;
    int a[size];
    for(i=0; i<size; i++) {
    cout<<"Enter arr["<<i<<"] Element : "; cin>>a[i];  }
    cout<<"Stored Data in Array : "<<endl;
    for(i=0;i<size;i++) {
    cout<<" "<<a[i]<<" "; }
    Reverse_Array(a,size);
    cout<<endl << "Reversed Array Values are : " <<endl;
    for(i=0;i<size;i++) {
    cout<<" "<<a[i]<<" "; }
    cout<<endl;
    return 0; }
void Reverse_Array(int array[],int size){
    int temp; size--;
    for (int i=0;size>=i;size--,i++) {
    temp=array[i];
    array[i]=array[size];
    array[size]=temp; } }
