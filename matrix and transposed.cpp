#include <iostream>
using namespace std;

int** createm(int row, int col){
    int** matrix;
    matrix = new int*[row];
    for(int r = 0; r < row; r++){
        matrix[r] = new int[col];
    }
    return matrix;
}

void fill_in_matrix(int** matrix, int row, int col){
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            cout << "Type matrix [" << r << "][" << c << "]: ";
            cin >> matrix[r][c];
        }
    }
}    

int** transpose(int** matrix, int row, int col){
    int** transposed; 
    transposed = createm(col, row);
    for(int r = 0; r < col; r++){
        for(int c = 0; c < row; c++){
           transposed[c][r] = matrix[r][c] ;
        }
    }
    return transposed;
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
    int row, column;
    int** matrix;
    int** transposed;

    cout << "Type rows number: ";
    cin >> row;

    cout << "Type column number: ";
    cin >> column;

    matrix = createm(row, column);
    fill_in_matrix(matrix, row, column);

    transposed = transpose(matrix, column, row);

    cout << "Printing Matrix according to your setings:" << endl;
    printm(matrix, row, column);

    cout << "Printing transpose of your matrix:" << endl;
    printm(transposed, column, row);    

}