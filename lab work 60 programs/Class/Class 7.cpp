#include<iostream>
using namespace std;
class Example {
   int a, b;
   public:
   Example(int x, int y) {
      a = x;
      b = y;
      cout << "Im Constructor"<<endl; }
    Example(const Example& obj) {
      a = obj.a;
      b = obj.b;
      cout << "Im Copy Constructor"<<endl; }
    void Display() {
      cout << "Values : " << a << "\t" << b<<endl; } };
int main() {
    Example a1(11, 33);
    Example a2 (a1) ;
    Example a3 = a1;
    a1.Display();
    a2.Display();
    a3.Display();
    return 0; }
