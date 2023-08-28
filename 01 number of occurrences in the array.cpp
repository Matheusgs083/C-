#include <iostream>
using namespace std;
void readv(int v[],int size){
    for (int i = 0; i < size; i++ ){
        cout << "array pos" << i << ": ";
        cin >> v[i];
    }
}

int repetition(int num,int v[],int size){
    int count = 0;
    for (int i = 0; i < size ; i++){
        if (num == v[i]){
            count++;
        }
    }
    return count;
}

int main(){
    int size = 5;
    int list[size];
    int flag;
    
    readv(list,size);
    
    cout << "Type a number to look for in the array: ";
    cin>>flag;
    
    int count = repetition(flag,list,size);
    cout << "The number " << flag << " repeat " << count << " times in the array";
}