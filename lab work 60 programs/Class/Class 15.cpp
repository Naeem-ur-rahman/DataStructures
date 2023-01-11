#include<iostream>
using namespace std;
class complex
{
    int re,im;
    public:
    void get(){
    cout<<"Enter Real Part  : ";cin>>re;
    cout<<"Enter Imag. Part : ";cin>>im; }
    void disp() { cout<<re<<"+"<<im<<"i"<<endl; }
    void sum(complex,complex); };
void complex::sum(complex c1,complex c2) {
    re=c1.re+c2.re; im=c1.im+c2.im; }
int main() {
    complex c1,c2,c3;
    cout<<"Enter 1st complex no.   "<<endl;c1.get();
    cout<<"Enter 2nd complex no.   "<<endl;c2.get();
    cout<<"The 1st complex no. is  : ";c1.disp();
    cout<<"The 2nd complex no. is  : ";c2.disp();
    c3.sum(c1,c2);
    cout<<"The Sum of two complex no.s are : ";c3.disp();
    return 0;}
