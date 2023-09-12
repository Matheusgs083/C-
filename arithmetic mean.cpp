#include <iostream>
using namespace std;

double* create_array(int size){
    double* grades;
    grades = new double[size];
    for(int i = 0; i < size; i++){
        cout << "Type note " << i << ": ";
        cin >> grades[i];
    }
    return grades;
}

double averagen(double* array, int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return (sum/size);

}

int main(){
    int size;
    double* array;
    double average;

    cout << "Type note numbers: ";
    cin >> size;

    array = create_array(size);

    average = averagen(array, size);
    cout << "The class average is: " << average;
    
    delete[] array; 

    return 0;
}