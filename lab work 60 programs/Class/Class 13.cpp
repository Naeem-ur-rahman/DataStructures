#include<iostream>
using namespace std;
class largest {
  int x,y,z;
    public:
    void input()  {
    cout<<"Enter 1st number :: "; cin>>x;
    cout<<"Enter 2nd number :: "; cin>>y;
    cout<<"Enter 3rd number :: "; cin>>z; }
    void calc() {
    int r;
    r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
    cout<<"The Largest Number among [ "<<x<<", "<<y<<", "<<z<<" ] = "<<r<<endl;
    }  };
int main() {
    largest g; g.input();
    g.calc(); return 0; }
