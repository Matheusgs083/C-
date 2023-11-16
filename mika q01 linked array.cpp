#include <iostream>
using namespace std;

struct Array{
    double data;
    Array* next;
};

Array* create_array(){
    return NULL;
}

void append(Array*& list, double value){
    Array* aux = new Array;
    
    aux -> data = value;   
    aux -> next = NULL;

    if(list == NULL){
        list = aux;
    }
    else{
        Array* a = list;
        while(a -> next != NULL){
            
            a = a -> next;
        }
        a -> next = aux;
    }
}

void print(Array* list){
    Array* a = list;
    if(list==NULL)
        cout<<"Emity array."<<endl;
    else{
        while(a != NULL){
            cout << a -> data <<" ";
            a = a-> next;
        }
    }
}

void menu(Array*& list){
    int flag;
    double data;

    while(true){

        cout << "Type 1 to add new value or type 2 to print array: ";
        cin >> flag;

        if(flag == 1){
            cout << "Type a new value: ";
            cin >> data;

            append(list, data);
            
        }
        else if (flag == 2){
            print(list);
            break;
        }
        else{
            cout << "Invalid value, try again." << endl;
        }
    }
}



int main(){
    Array* list = create_array();
   
    menu(list);

}
