#include <iostream>
using namespace std;

int** create_matrix(int line, int col){
    int **mat;
    mat = new int*[line];
    for (int i = 0; i < line; i++){
        mat[i] = new int[col];
    }
    return mat;
}

void read_matrix(int** mat, int line, int col){
    for(int i = 0; i < line; i++){
        for(int j = 0; j < col; j++){
            cout << "Type M[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

void print_matrix(int** mat, int line, int col){
    cout << "Printing Matrix: " << endl;
    for(int i = 0; i < line; i++){
        for(int j = 0; j < col; j++){
            cout << "[ " << mat[i][j] << " ]";
        }
        cout << endl;
    }
}

int main(){
    int line, column;
    
    cout << "Type line number: ";
    cin >> line;

    cout << "Type column number: ";
    cin >> column;

    int** mat = create_matrix(line, column);

    read_matrix(mat, line, column);

    print_matrix(mat, line, column);
}