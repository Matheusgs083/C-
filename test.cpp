#include <iostream>
using namespace std;

void printv( int list[], int size){
    cout << "array: [";
    for (int i = 0; i < size; i++) {
        if (i == (size - 1)) {
            cout << " " << list[i] << " ";
        } else {
            cout << " " << list[i] << ",";
        }
    }
    cout << "]" << endl;
}

int main(){
    int aux = 0;
    int size = 5;

    int num[size];
    int *pnum = &num[0];
    
    for(int i = 0; i < size; i++){
        *pnum = aux;
        (*pnum++);
        aux += 10;
    }
    
    printv(num, size);
}