#include <iostream>
using namespace std;
class date{
	int year, mounth ,day;
	char d;
	public:
	date () : year(0),mounth(0),day(0) {   }
	void getdate() {
	cout << "Enter Date (Day/Mounth/Year) : ";cin>>day>>d>>mounth>>d>>year; }
	void showdate() {
	cout << "You Entered ! "<<endl;
	cout<<'\t'<<'\t' << "("<<day<<"/"<<mounth<<"/"<<year<<")"<<endl; } };
int main () {
	date d1; d1.getdate();
	cout << endl; d1.showdate();
	return 0;}
