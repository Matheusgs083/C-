#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

Node* create_array(){
    return NULL;
}

void append(Node*& array, int value){
    Node* aux = new Node;
    aux -> value = value;
    aux -> next = NULL;
    
    if (array == NULL){
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

void especific_print(Node* array, int initialpos, int quanty){
    if(array == NULL){
        cout << "Emity array";
    }
    else{
        int count = 0;
        Node* current = array;
        while(count != initialpos){
            current = current -> next;
            count++;
        }
        for(int i = 0; i < quanty; i++){
            if (current != NULL){
                cout << current -> value << " ";
            }
            else{
                return;
            }
            current = current -> next;
        }
    }
}

void split(Node*& array, Node*& array2, int pos){
    if(array == NULL){
        cout << "Empty array.";
    }
    if(array2 != NULL){
        cout << "This array must be empty. ";
    }
    else{
        Node* P = array;
        if(P -> next == NULL){
            cout << "Impossible to split. This array only has node. ";
        }
        else if(pos == 0){
            array2 = array;
            array = NULL;
        }
        else{
            int count = 0;
            while(count < pos && P -> next != NULL){
                P = P -> next;
                count++;
            }
            if(P -> next == NULL){ 
                cout << "invalid pos;";
            }
            else{
                array2 = P -> next;
                P -> next = NULL;
            }
        }
    }
}

void printl(Node* array){
    if(array == NULL){
        cout << "Emity array.";
    }
    else{
        Node* P = array;
        cout << "[ ";
        while(P -> next != NULL){
            cout << P -> value << " ";
            P = P -> next;
        }
        cout << P -> value << " ]" << endl;
    }
}
int main(){
    Node* array = create_array();
    Node* array2 = create_array();

    append(array, 5);
    append(array, 4);
    append(array, 3);
    append(array, 2);
    append(array, 1);
    append(array, 0);

    split(array, array2, 2);

    printl(array);
    printl(array2);
}