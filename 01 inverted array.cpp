#include <iostream>
using namespace std;
void readv(int v[],int size){
    for (int i = 0; i < size; i++){
        cout << "array pos "<< i << ": ";
        cin >> v[i];
    }
}

void invertedv(int v[],int size,int inv[]){
    int count = 0;               // control variable, to invert the array, starting at 0 and going to size - 1. 
    for (int i = (size-1); i>-1; i--){
        inv[count] = v[i];
        count++;
    }
    count = 0;
}

void printv(const char* namea,int list[],int size){
    cout<<namea<<": ";
    cout<<"[";
    for(int i = 0; i < size;i++){
        if (i == (size-1)){
            cout<<list[i]<<"";
        }
        else if(i == 0){
            cout<<list[i]<<", ";
        }
        else{
            cout<<list[i]<<", ";
        }  
    }
    cout<<"]"<<endl;
}

int main(){
    const int size = 10;
    int v[size];
    int invertv[size];

    readv(v,size);

    invertedv(v,size,invertv);
    
    printv("array",v,size);
    printv("Inverted array",invertv,size);
}