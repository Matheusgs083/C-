#include <iostream>
using namespace std;

double** create_matrix(int m, int n){
    double** matrix;
    matrix = new double*[m];

    for(int i = 0; i < m; i++){
        matrix[i] = new double[n];
    }
    return matrix;
}

void read_matrix(double** matrix, int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << "Type matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
}

double** sum_matrix(double** matrix1, double** matrix2, int m, int n){
    double** matrix3;
    matrix3 = create_matrix(m, n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return matrix3;
}

void print_matrix(double** matrix, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "[ " << matrix[i][j] << " ]";
        }
        cout << endl;
    }
}

int main(){
    double** matrix1;
    double** matrix2;
    double** matrixsum;
    int m, n;

    cout << "Type line number: ";
    cin >> m;

    cout << "Type column number: ";
    cin >> n;

    matrix1 = create_matrix(m, n);
    cout << "Type elements of matrix 1: ";
    read_matrix(matrix1, m, n);

    matrix2 = create_matrix(m, n);
    cout << "Type elements of matrix 2: ";
    read_matrix(matrix2, m, n);
    
    matrixsum = sum_matrix(matrix1, matrix2, m, n);
    print_matrix(matrixsum, m, n);
    
    delete[] matrix1;
    delete[] matrix2;
    delete[] matrixsum;

    return 0;
    
}