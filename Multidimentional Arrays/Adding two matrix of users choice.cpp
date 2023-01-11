#include<iostream>
using namespace std;

int main()
{
    int rowOne, colOne, rowTwo, colTwo, i, j;
    char c;
    cout<<"Enter in form of For 1st Matrix i/j : "; cin>>rowOne>>c>>colOne;
    cout<<"Enter in form of For 2st Matrix i/j : "; cin>>rowTwo>>c>>colTwo;
    
    int mat1[rowOne][colOne], mat2[rowTwo][colTwo], 
	sum=0;
    
	if(rowOne == rowTwo && colOne == colTwo)
    {
        cout<<"Enter "<<rowOne<<"*"<<colOne<<" First Matrix Elements ! "<<endl;
        
		for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++){
                cin>>mat1[i][j];
                
			}
        }
        
		cout<<"Enter "<<rowOne<<"*"<<colOne<<" Second Matrix Elements ! "<<endl;
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++){
            	cin>>mat2[i][j];
			}
        }
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++)
            {
                mat1[i][j] = mat1[i][j]+mat2[i][j];
        }
        }
        cout << "Result is ! "<<endl;
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++)
            {
               
                cout<<mat1[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"\nSize Mismatched!\n";
    return 0;
}
