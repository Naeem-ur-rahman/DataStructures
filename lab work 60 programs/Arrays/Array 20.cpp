#include <iostream>
using namespace std;
int main(){
    int a[5][5], trans[5][5], r, c, i, j;
    cout << "Enter rows of matrix: ";cin >> r;
    cout << "Enter columns of matrix: ";cin >> c;
    cout<<"Enter Elements to Matrix Below "<<endl;
    for(i=0;i<r;i++) {
    for(j=0;j<c;++j){
    cout<<"Enter a1["<<i<<"]["<<j<<"] Element : ";cin>>a[i][j];
    } }
    cout <<endl<< " The Entered Matrix is " << endl;
    for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j){
    cout<<"\t"<<a[i][j]; }
    cout<<"\n";}
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j){
    trans[j][i]=a[i][j];}
    cout << endl << "Transpose of Matrix : " << endl;
    for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j){
    cout<<"\t"<<trans[i][j]; }
    cout<<"\n\n";}
    return 0;}
