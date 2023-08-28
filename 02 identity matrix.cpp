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

bool identity(int matrix[100][100], int sq){
    for (int i = 0; i < sq; i++){
        for (int j = 0; j < sq; j++){
            if (matrix[i][j] != 0 && i != j){
                return false;
            }
            else if (matrix[i][j] != 1 && i == j){
                return false;
            }
        }    
    }
    return true;
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
    int matrix[100][100]; // "Defining the variables"

    cout << "Type the size of sq matrix to get its identity matrix: ";
    cin >> sq; // putting a number in sq variable

    generate_matrix(matrix, sq);
    print_matrix(matrix,sq);  // calling the functions
     if (identity(matrix, sq)){
        cout << "Identity!";
     }
     else{
        cout << "Not Identity!";
     }
    
    return 0;
}