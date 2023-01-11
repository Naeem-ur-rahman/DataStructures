#include <iostream>
using namespace std;
void pass(int[],int);
int main()
{
    int a[]={1,2,3,4,5};
    pass(a,5);
    return 0;
}
void pass(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<b[i];
    }
}
