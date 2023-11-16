#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* prev;
    Node* next;
};

Node* create_array(){
    return NULL;
}

void append(Node*& array, int value){
    Node* aux = new Node;
    
    aux -> value = value;
    aux -> prev = NULL;
    aux -> next = NULL;

    if(array == NULL){
        array = aux;
    }
    else{
        Node* P = array;
        while(P -> next != NULL){
            P = P -> next;
        }
        P -> next = aux;
        aux -> prev = P;
    }
}

void print(Node* array){
    if(array == NULL){
        cout << "Emity array";
    }
    else{
        Node* P = array;
        cout << "[ ";
        while(P != NULL){
            cout << P -> value << " ";
            P = P -> next;
        }
        cout << "]";
    }
}

void reverse_print(Node* array){
    if(array == NULL){
        cout << "emity array";
    }
    else{
        Node* P = array;
        while(P -> next != NULL){
            P = P -> next;
        }
        cout << "[ ";
        while(P != NULL){
            cout << P -> value << " ";
            P = P -> prev;
        }
        cout << "]";
    }
}

bool concatenate(Node*& array, Node*& array2){
    if(array == NULL && array2 != NULL){
        array = array2;
        return true;
    }
    else if(array2 == NULL && array != NULL){
        return true;
    }
    else if(array2 == NULL && array == NULL){
        cout << "Emity arrays";
        return false;
    }
    else{
        Node* P = array;
        Node* Q = array2;
        while(P -> next != NULL){
            P = P -> next;
        }
        Q -> prev = P;
        P -> next = Q;
        return true;
    }

}

int main(){
    Node* array = create_array();
    Node* array2 = create_array();

    append(array, 5);
    append(array, 7);
    append(array, 9);

    append(array2, 4);
    append(array2, 2);
    append(array2, 1);

    print(array);
    reverse_print(array);
    print(array2);
    reverse_print(array2);

    if (concatenate(array, array2)){
        print(array);
        reverse_print(array);
    }
    else{
        cout << "Error";
    }





}