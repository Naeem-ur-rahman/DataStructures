#include<iostream>
using namespace std;
void quick_Sort(int);

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int partition(int array[], int low, int high) {

  int pivot = array[high];
  int i = low ;

  for (int j = low; j < high; j++) {
  	cout<<" "<<j<<"."<<endl;
    if (array[j] <= pivot) {       
           
          cout<<array[i]<<"  "<<array[j]<<endl;
     swap(&array[i], &array[j]);
      i++; 
     printArray(array,7);
    }
    cout<<"end"<<endl;
  }
  
 swap( &array [i], &array[high]);
  cout<<array[i]<<"  pivot "<<array[high]<<endl;
  printArray(array,7);
  cout<<"pass : "<<i<<endl;
  return i ;
}


void quickSort(int array[], int low, int high) {
 
  if (low < high) {

    int pi = partition(array, low, high);
    cout<<"left"<<endl;
    quickSort(array, low, pi - 1);
    cout<<"right"<<endl;
    quickSort(array, pi + 1, high);
  }
}

int main() {
   int n=7;
  int data[n] = {8, 7, 6, 1, 0, 9, 2};
  
  cout << "Unsorted Array "<<endl;
  printArray(data, n);

  quickSort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order "<<endl;
  printArray(data, n);
}
