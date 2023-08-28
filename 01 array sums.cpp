#include <iostream>
using namespace std;
void readv(int v[],int size){
    for (int i = 0; i < size; i++ ){
        cout << "array pos " << i << ": ";
        cin >> v[i];
    }
}

void sumv(int v1[],int v2[],int v3[],int size){
    for (int i = 0; i < size;i++){
        v3[i] = (v1[i] + v2[i]);
    }    
}

void printv(const char* namev, int list[], int size) {
    cout << "array " << namev << ": [";
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
    int size = 5;
    int v1[size];
    int v2[size];
    int sv[size];

    readv(v1,size);
    readv(v2,size);
    sumv(v1,v2,sv,size);
    
    printv("array 01",v1,size);
    printv("array 02",v2,size);
    printv("array sums",sv,size);
}