#include <iostream>
#include <string>
using namespace std;
class Student {
private:
   string name;
   int roll, sub1, sub2, sub3;
   float total, avg;
public:
   void read() {
      cout << "Enter Name : "; cin >> name;
      cout << "Enter Rollno : "; cin >> roll;
      cout << "Enter Marks for Subject 1,2 and 3 : ";
      cin >> sub1 >> sub2>> sub3; }
   void sum() {
      total = sub1 + sub2 + sub3;
      avg = total / 3; }
   void print() {
      cout << "Name    : " << name << endl;
      cout << "Rollno  : " << roll << endl;
      cout << "Marks   : " << sub1 << " , " << sub2 << " , " << sub3 << endl;
      cout << "Total   : " << total << endl;
      cout << "Average : " << avg << endl; }
};
int main() {
   Student s1, s2;
   cout << "Student 1" << endl;
   s1.read();
   s1.sum();
   s1.print();
   cout << "Student 2" << endl;
   s2.read();
   s2.sum();
   s2.print();
   return 0; }
