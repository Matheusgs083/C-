#include <iostream>
using namespace std; 

int** createm(int row, int column){
    int** matrix = new int*[row];
    for(int r = 0; r < row; r++){
        matrix[r] = new int[column];
    }
    return matrix;
}

void fill_in(int** matrix, int row, int column){
    for(int r = 0; r < row; r++){
        for(int c = 0; c < column; c++){
            cout << "Type matrix[" << r << "][" << c << "]: ";
            cin >> matrix[r][c];
        }
    }
}

int** sum_matrix(int**& matrix1, int**& matrix2, int row, int column){
    int** matrix3 = createm(row, column);
    for(int r = 0; r < row; r++){
        for(int c = 0; c < column; c++){
            matrix3[r][c] = matrix1[r][c] + matrix2[r][c];
        }
    }
    return matrix3;
}

int** minus_matrix(int**& matrix1, int**& matrix2, int row, int column){
    int** matrix3 = createm(row, column);
    for(int r = 0; r < row; r++){
        for(int c = 0; c < column; c++){
            matrix3[r][c] = matrix1[r][c] - matrix2[r][c];
        }
    }
    return matrix3;
}

void printm(int** matrix, int row, int col){
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            cout << "[ " << matrix[r][c] << " ]";
        }
        cout << endl;
    }
}

int main(){
    int row, col;
    int** matrix1;
    int** matrix2;
    int** sum;
    int** minus;

    cout << "Type rows number: ";
    cin >> row;

    cout << "Type column number: ";
    cin >> col;

    matrix1 = createm(row, col);
    fill_in(matrix1, row, col);
    
    cout << "Priting matrix 01: ";
    printm(matrix1, row, col);

    matrix2 = createm(row, col);
    fill_in(matrix2, row, col);
    
    cout << "Printing matrix 02: ";
    printm(matrix2, row, col);

    cout << "Printing matrix's sum: ";
    sum = sum_matrix(matrix1, matrix2, row, col);
    printm(sum, row, col);

    cout << "Printing matrix's subtraction: ";
    minus = minus_matrix(matrix1, matrix2, row, col);
    printm(minus, row, col);

    return 0;
}
