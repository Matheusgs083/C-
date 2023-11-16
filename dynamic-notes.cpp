#include <iostream>
using namespace std;

struct Node{
    string name;
    double n1;
    double n2;
    Node* next;
};

Node* create_array(){
    return NULL;
}

void read(Node*& array){
    int flag;

    Node* aux = create_array();

    while(flag != 0){

        aux = new Node;

        cout << "Type your name: ";
        cin >> aux -> name;

        cout << "Type your first note: ";
        cin >> aux -> n1;

        cout << "Type your second note: ";
        cin >> aux -> n2;
        
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

        cout << "Add new student?(0 to break) ";
        cin >> flag;
    }
}

void stundent_averange(Node* array) {
    double averange;
    Node* P = array;

    while(P != NULL){

        averange = (P -> n1 + P -> n2)/2;
        if (averange >= 7) {
            cout << "Student: " << P->name << ", Averange: " << averange << ", Situation: Approved" << endl;
        } 
        else if (averange >= 4) {
            cout << "Student: " << P->name << ", Averange: " << averange << ", Situation: Final exam" << endl;
        } 
        else{
            cout << "Student: " << P->name << ", Averange: " << averange << ", Situation: Repproved" << endl;
         }
        P = P -> next;
    }
    
}

int main(){
    Node* array = create_array();
    
    read(array);

    stundent_averange(array);
}