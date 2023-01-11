#include<iostream>
using namespace std;
class A {

    private:
    int Array[10];
    int size = sizeof(Array)/sizeof(Array[1]);
    public:
    void takingInput();
    void bubbleSort();
    void displayArray();
    
};
void A::takingInput() {

    cout << "\n\t\tINPUT ARRAY"<< endl;
    for(int i=0;i<size;i++) {
        cout << i <<  " : ";
        cin >> Array[i];
    }

}
void A::bubbleSort() {

    int temp;
    int count;
    for(int i=0;i<size-1;i++) {
        count = size-1;     
        for(int j=0;j<(size-1)-i;j++) {
            if(Array[j]>Array[j+1]) {                
                temp = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = temp;
                count--;
            }
        }
        if(count == size-1) {
            i = 9;
        }
    }

}
void A::displayArray() {

    cout << "\t\tSORTED ARRAY"<< endl;
    for(int i=0;i<size;i++) {
        cout << Array[i] << "  ";
    }
    cout << endl;
}

int main(){
    A obj;
    obj.takingInput();
    obj.bubbleSort();
    obj.displayArray();
    return 0;
}
