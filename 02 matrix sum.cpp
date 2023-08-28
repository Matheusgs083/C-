#include <iostream>
using namespace std;

void generate_matrix(int matrix[100][100], int sq){
    for (int i = 0; i < sq; i++){
        for (int j = 0; j < sq; j++){
            cout << "Type matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }   
    }
}

void sum_matrix(int matrix[100][100], int matrix2[100][100],int matrix_sum[100][100], int sq){
     for (int i = 0; i < sq; i++){
        for (int j = 0; j < sq; j++){
            matrix_sum[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
}

void print_matrix(int matrix[100][100], int sq){
    cout << "Printing matrix..." << endl;
    for (int i = 0; i < sq; i++){
        for (int j = 0; j < sq; j++){
            cout <<" [ " << matrix[i][j] << " ] ";
        }
        cout << endl;
    }
}

int main(){
    
    int sq;
    int matrix[100][100];
    int matrix2[100][100];
    int suma[100][100];

    cout << "Type the size of sq matrix to get its identity matrix: ";
    cin >> sq;                                              // putting a number in sq variable

    cout << "Generating matrix 01: " << endl;               // matrix generators
    generate_matrix(matrix, sq);

    cout << "Generating matrix 02: " << endl;               // matrix generators
    generate_matrix(matrix2,sq);

    cout << "Adding matrices..." << endl;                           // matrix sum
    sum_matrix(matrix, matrix2, suma, sq);
    print_matrix(suma, sq);

    return 0;
}
    
