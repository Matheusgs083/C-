#include <iostream>
using namespace std;

struct Node{

    int data;
    Node* next;
    
}; 

Node* create_array(){
    
    return NULL;

}

void append(Node*& head, int value){

    Node* aux = new Node;
    
    aux -> data = value;
    aux -> next = NULL;

    if(head == NULL){
        
        head = aux;
        aux -> next = head;

    }
    else{

        Node* P = head;
        while(P -> next != head){
            
            P = P -> next;

        }
        P -> next = aux;
        aux -> next = head;
    }     
}

void pop(Node*& head){
    if (head == NULL){
        cout << "Emity array";
    }
    else{
        Node* P = head;
        if( P -> next == NULL){
            delete P;
            head = NULL;
        }
        else{
            Node* Last = NULL;
            while(P -> next != head){
                Last = P;
                P = P -> next;
            }
            Last -> next = head;
            delete P;
        }
    }
}

void reverse_pop(Node*& head){
    if(head == NULL){
        cout << "Emity array";
    }
    else{
        Node* P = head;
        if(P -> next == NULL){
            delete P;
            head = NULL;    
        }
        else{
            Node* Last = head;
            while(Last -> next != head){
                Last = Last -> next;
            }
            head = P -> next;
            Last -> next = head;
            delete P;
        }
    }
}

void print(Node* head){
    if(head == NULL){
        cout << "emity array";
    }
    else{
        Node* P = head;
        cout << "[ ";
        cout << P -> data << " ";
        P = P -> next;
        while(P != head){
            cout << P -> data << " ";
            P = P -> next;
        }
        cout << "]";
    }
}

void remove_pos(Node*& head, int pos){
    int count = 0;
    if (head == NULL){
        cout << "Emity array";
    }
    else{
        if(pos == 0){
            Node* Last = head;
            while(Last -> next != head){
                Last = Last -> next;
            }
            if(Last == head){
                delete head;
                head = NULL;
            }
            else{
                Node* Temp = head;
                head = head -> next;
                Last -> next = head;
                delete Temp;
            }
        return;
        }
        else{
            Node* P = head;
            Node* prev = NULL;
            while(count < pos){
                prev = P;
                P = P -> next;
                count++;
                if(P == head){
                    cout << "Invalid pos";
                    return;
                }
            }
           
            prev -> next = P -> next;
            delete P;

        }
    }
}

int main(){
    Node* head = create_array();
    
    append(head, 5);
    append(head, 2);
    append(head, 4);
    append(head, 4);
    append(head, 4);

    print(head);

    pop(head);
    reverse_pop(head);

    remove_pos(head, 2);

    print(head);

}