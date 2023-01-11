#include<iostream>
using namespace std;
class bill{
    int  no;
    char name[20];
    int units;
    double bill;
    public:
    void get(){
    cout<<"Enter Details of Customer Below " <<endl;
    cout<<"Enter Customer No. : ";cin>>no;
    cout<<"Enter Customer Name : ";cin>>name;
    cout<<"Enter No. of Units used : "; cin>>units; }
    void put() {
    cout<<"Entered Details of Customer are : " <<endl;
    cout<<"Customer No. is : "<<no<<endl;
    cout<<"Customer Name is : "<<name<<endl;
    cout<<"Number of Units Consumed : "<<units<<endl;
    cout<<"Bill of Customer : "<<bill<<endl;  }
    void calc_bill(){
    if(units<=100) bill=units*1.20;
    else if(units<=300) bill=100*1.20+(units-100)*2;
    else  bill=100*1.20+200*2+(units-300)*3; } };
int main() {
    bill b1; b1.get();
    b1.calc_bill(); b1.put();
    return 0; }
