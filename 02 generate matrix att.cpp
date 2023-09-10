#include <iostream>
using namespace std;

int** generate_matrix(int sq){
    int** matrix;
    matrix = new int*[sq];
    for (int i = 0; i < sq; i++){
        matrix[i] = new int[sq];
    }
    return matrix;
}

void indentity_matrix(int** matrix, int sq){
    for(int i = 0; i < sq; i++){
        for(int j = 0; j < sq; j++){
            if (i == j){
                matrix[i][j] = 1;
            }
            else{
                matrix[i][j] = 0;
            }
        }
    }
}

void print_matrix(int** matrix, int sq){
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

    cout << "Type the size of sq matrix to get its identity matrix: ";
    cin >> sq; // putting a number in sq variable

    int** matrix = generate_matrix(sq); // "Defining the variables"
    indentity_matrix(matrix, sq);
    print_matrix(matrix,sq);  // calling the functions
    
    
    return 0;
}