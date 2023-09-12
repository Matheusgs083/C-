#include <iostream>
using namespace std;

struct Finance{
    
    double income;
    double expenses;

};

Finance** create_matrix(int years, int months){
    
    Finance** matrix;

    matrix = new Finance*[years];
    for (int m = 0; m < years; m++){
        matrix[m] = new Finance[months];
    }

    return matrix;
}

void monthly_expenses(Finance** matrix, int years, int months){
    
    for(int y = 0; y < years; y++){
        for(int m = 0; m < months; m++){
           
           cout << "Type your month's income: ";
            cin >> matrix[y][m].income;

            cout << "Type yout month's expense: ";
            cin >> matrix[y][m].expenses;

        }
    }
}

double** balance_matrix(Finance** matrix, int years, int months){
    double** balance;
    balance = new double*[years];
    
    for(int y = 0; y < years; y++){
        balance[y] = new double[months];
    }

    for(int y = 0; y < years; y++){
        for(int m = 0; m < months; m++){
            balance[y][m] = matrix[y][m].income - matrix[y][m].expenses;
        }
    }
    return balance;
}

void print_balance(Finance** matrix, int years, int months){
    for(int y = 0; y < years; y++){
        for(int m = 0; m < months; m++){
            cout << "Year " << y+1 << " - Month " << m+1 << " - Incomes: " << matrix[y][m].income << endl;
            cout << "Year " << y+1 << " - Month " << m+1 << " - Expenses: " << matrix[y][m].expenses << endl;

        }
    }
}

void print_matrix(double** mat, int line, int col){
    cout << "Printing Matrix: " << endl;
    for(int i = 0; i < line; i++){
        for(int j = 0; j < col; j++){
            cout << "[ " << mat[i][j] << " ]";
        }
        cout << endl;
    }
}


int main(){
    int years = 1;
    int months = 12;
    Finance** month;
    double** balance;

    month = create_matrix(years, months);

    monthly_expenses(month, years, months);

    print_balance(month, years, months);
    
    balance_matrix(month, years, months);

    balance = balance_matrix(month, years, months);
    print_matrix(balance, years, months);
}