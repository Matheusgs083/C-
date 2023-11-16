#include <iostream>
using namespace std;

struct Node{
    int date;
    Node* next;
};

Node* create_array(){
    return NULL;
}

void append(Node*& array, int value){
    Node* aux = new Node;

    aux -> date = value;
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
    }
}
void insert(Node*& array, int value, int pos){
    int count = 0;
    Node* aux = new Node;

    aux -> date = value;
    aux -> next = NULL;

    if(pos == 0){
        aux -> next = array;
        array = aux;
    }
    else{
        Node* P = array;
        while(P -> next != NULL && count < pos - 1){
           P = P -> next;
        }
        if(P == NULL){
            cout << "Invalid pos;";
        }
        else{
            aux -> next = P -> next;
            P -> next = aux;
        }
    }
        
}

void remove(Node*& array, int pos){
    int count = 0;
    if(pos < 0){
        return;
    }

    if(pos == 0){
        Node* del = array;
        array = array -> next;
        delete del;
    }
    else{
        Node* P = array;
        while (P != NULL && count < pos - 1 ){
            P = P -> next;
        }
        if( P == NULL || P -> next == NULL){
            cout << "Invalid pos;";
        }
        else{
            Node* del = P;
            P -> next = del -> next;
            delete del;
        }
    }
}

