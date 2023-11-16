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

void printm(int** matrix, int row, int col){
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            cout << "[ " << matrix[r][c] << " ]";
        }
        cout << endl;
    }
}
void traderow(int** matrix, int row, int column, int row1, int row2){
    
    for(int c = 0; c < column; c++){
        int aux = matrix[row1][c];
        matrix[row1][c] = matrix[row2][c];
        matrix[row2][c] = aux;
    }
}

int main(){
    int row, column;
    int** matrix;
    int high, low;
    int posh[2];
    int posl[2];
    int row1, row2;
    cout << "Type rows number: ";
    cin >> row;

    cout << "Type column number: ";
    cin >> column;

    matrix = createm(row, column);
    fill_in_matrix(matrix, row, column);   

    cout << "Type row1 to trade: ";
    cin >> row1;

    cout << "Type row2 to trade: ";
    cin >> row2;

    printm(matrix, row, column);

    traderow(matrix, row, column, row1, row2);

    printm(matrix, row, column);



}