#include <iostream>
using namespace std;

void readv(const char* namev, int v[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "array " << namev << " pos " << i << ": "; // used as a parameter to the readv and printv functions to receive a array name
        cin >> v[i];
    }
}

void printv(const char* namev, int list[], int size) {
    cout << "array " << namev << ": [";
    for (int i = 0; i < size; i++) {  // used as a parameter to the readv and printv functions to receive a array name 
        if (i == (size - 1)) {
            cout << " " << list[i] << " ";
        } else {
            cout << " " << list[i] << ",";
        }
    }
    cout << "]" << endl;
}

void concatenatev(int v1[], int v2[], int size, int size2, int v3[]) {
    for (int i = 0; i < size; i++) {
        v3[i] = v1[i];
    }
    for (int i = 0; i < size2; i++) {
        v3[size + i] = v2[i];
    }
}

int main() {

    int size = 4; // arrays size 01    
    int List_01[size];

    int size2 = 5; // arrays size 02   
    int List_02[size2];
    
    int size3 = size + size2;
    int vc[size3]; // array concatenate

    cout << "array 01" << endl;  // array readers 01
    readv("List_01", List_01, size);

    cout << "array 02" << endl; // array readers 02
    readv("List_02", List_02, size2);

    printv("List_01", List_01, size); // printing array 01
    printv("List_02", List_02, size2); // printing array 02 

    concatenatev(List_01, List_02, size, size2, vc); // concatenating array 01 and array 02 to "vc"
    printv("Vc", vc, size3); // printing array vc 

}
