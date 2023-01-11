#include <iostream>
using namespace std;
int main() {
    string line; int i;
    cout << "Enter any string : "; cin>>line;
    cout << "The Original String is : " << line<<endl;
    int len = line.size();
    for(i=0;i<len;++i) {
		if (!((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))) {
            line[i]='\0'; } }
    cout << "After Removing Characters, String is :: " << line<<endl;
    return 0; }
