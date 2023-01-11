#include <iostream>
using namespace std;
int main(){
   int a[100],n,i;
   cout<<"Enter size of Array : ";cin>>n;
   for(i=0;i<n;++i)  {
    cout<<"Enter "<<i+1<<" element : ";cin>>a[i]; }
   cout << "Accessing Elements through Pointers are \n";
   for(int i = 0; i < n; ++i) {
       cout << endl << *(a + i); }
return 0;}
