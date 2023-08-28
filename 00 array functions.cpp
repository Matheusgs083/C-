#include <iostream>
using namespace std;
void readv(int list[], int size){
    for(int i = 0; i < size;i++){ 
        cout << "List pos " << i+1 << ": ";
        cin >> list[i];
    }
}

void printv(int list[], int size){
    cout << "List: " << "[";
    for(int i = 0; i < size;i++){
        if (i == (size-1)){
            cout << list[i] << "";
        }
        else if(i == 0){
            cout << list[i] << ", ";
        }
        else{
            cout << list[i] << ", ";
        }  
    }
    cout << "]" << endl;
}

int highnum(int list[], int size){
    int highest = list[0];
    for (int i = 0; i < size; i++){
        if (list[i] > highest){
            highest = list[i];
        }
    }
    return highest;
}

int lownum(int list[], int size){
    int lower = list[0];
    for (int i=0; i<size; i++){
        if (list[i] < lower){
            lower = list[i];
        }
    }
    return lower;
}

int main(){
    
    const int size = 5;
    int list[size];

    readv(list,size);
    printv(list,size);

    int high = highnum(list,size);
    cout << "The biggest number is: " << high << endl;
    
    int low = lownum(list,size);
    cout << "The smallest number is: " << low << endl;
}