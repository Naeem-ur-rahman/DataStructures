#include<iostream>
using namespace std;
class cube{
    public:
	double side;
    double volume() {
    return(side*side*side); }
    cube(double side1){
    cout << "A constructor is called" << endl;
    side=side1; }
    cube(){
    cout << "A default constructor is called " << endl;  }
    ~cube(){
    cout << "Destructing " << side << endl; } };
int main() {
    cube c1(2.34);
    cube c2;
    cout << "The side of the cube is: " << c1.side << endl;
    cout << "The volume of the first cube is : " << c1.volume() << endl;
    cout << "Enter the length of the second cube : " ; cin >> c2.side;
    cout << "The volume of second cube is : " << c2.volume() << endl;
    return(0); }
