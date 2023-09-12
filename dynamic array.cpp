#include <iostream>
using namespace std;

int* create_array(int size){      //function to create and read dynamic array 
    int* array;
    array = new int[size];

    for(int i = 0; i < size; i++){
        cout << "Type array pos " << i << ": ";
        cin >> array[i];
    }
    return array;
}

void printa(int* array, int size){ //printing array
    cout << "[ ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

int main(){
    int size; 
    int* array;

    cout << "Type array size: "; // array size
    cin >> size;

    array = create_array(size); // calling function to create and read dynamic array

    printa(array, size); // function of print array

    delete[] array; // cleaning up memory space
}