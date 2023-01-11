#include<iostream>
using namespace std;
class date{
    int dd, mm, yy;
    public:
    date(){
    dd=19;
    mm=9;
    yy=2021;
    cout<<"Date Object has been created......."<<endl; }
    void display() {
    cout<<"The Entered Date is : ";
    cout<<dd<<"-"<<mm<<"-"<<yy<<"\n"; } };
int main (){
date d;
d.display ();
return 0; }
