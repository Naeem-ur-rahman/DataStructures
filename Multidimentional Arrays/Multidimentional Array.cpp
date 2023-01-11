#include <iostream>
#include <iomanip>
using namespace std;
const int dis=4,mon=3;
void input  (double arr[dis][mon]);
void display(double arr[dis][mon]);
int main(){
	cout << "This is the Program for the Sales in months wrt to districts  "<<endl;
	double arr[dis][mon]= { { 1432.07 , 234.50   , 654.01   },
                            { 322.00  , 13838.32 , 17589.88 },
                            { 9328.34 , 934.00   , 4492.30  },
                            { 12838.29, 2332.63  , 32.93    } };
                            cout << "Sample OutPut "<<endl;
							display(arr);
                            cout << "Again Input Values "<<endl;
                            input(arr);
                            display(arr);
	return 0;
}
void input(double arr[dis][mon]){
	    for(int a=0;a<dis;a++){
		for(int b=0;b<mon;b++){
			cout<<"Enter District "<<a+1<<" Month "<<b+1<<" Value : ";cin>>arr[a][b];
		}
	}
}
void display(double arr[dis][mon]){
            cout << "Result !"<<endl;
	        cout << "                       Months "<<endl;
            cout << "                1        2        3 "<<endl;
          for(int d=0; d<dis; d++){
            cout <<"District " << d+1;
            for(int m=0; m<mon; m++){			
             cout << setiosflags(ios::fixed) << setw(10) << setiosflags(ios::showpoint) << setprecision(2) << arr[d][m];
          }
		  cout<<endl;   
		  }
cout << endl<<endl; 	
}
