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

void highlow(int**matrix, int row, int col, int& high, int& low, int posh[2], int posl[2]){
    high = matrix[0][0];
    int highr = 0;
    int highc = 0;
    low = matrix[0][0];
    int lowr = 0;
    int lowc = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] > high) {
                high = matrix[i][j];
                highr = i;
                highc = j;
            }
            
            if (matrix[i][j] < low){
                low = matrix[i][j];
                lowr = i;
                lowc = j;
            }
        }   
    }
    posh[0] = highr;
    posh[1] = highc;
    posl[0] = lowr;
    posl[1] = lowc;

}

int main(){
    int row, column;
    int** matrix;
    int high, low;
    int posh[2];
    int posl[2];

    cout << "Type rows number: ";
    cin >> row;

    cout << "Type column number: ";
    cin >> column;

    matrix = createm(row, column);
    fill_in_matrix(matrix, row, column);

    cout << "Printing matrix: " << endl;
    printm(matrix, row, column);

    highlow(matrix, row, column, high, low, posh, posl);

    cout << "The highest element is: " << high << ". At pos matrix[" << posh[0] << "][" << posh[1] << "]." << endl;

    cout << "The lowest element is: " << low << ". At pos matrix [" << posl[0] << "][" << posl[1] << "]." << endl;    
}