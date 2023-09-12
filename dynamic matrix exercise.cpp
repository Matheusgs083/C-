#include <iostream>
using namespace std;

void createm(int** matrix,int m, int n){
    matrix = new int*[m];

    for(int i = 0; i < m; i++){
        
        matrix[i] = new int[n];

    }
}

int main(){
    int m,n;
    int** matrix;

    cout << "Type line number: ";
    cin >> m;

    cout << "Type column number: ";
    cin >> n;

    createm(matrix, m, n);

    cout << "Number of matrix elements is: " << m*n;
    
    delete[] matrix;
}