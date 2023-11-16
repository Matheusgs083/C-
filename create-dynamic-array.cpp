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
    Node* Head = new Node;
    
    Head -> value = value;
    Head -> next = NULL;

    if(array == NULL){
        array = Head;
    }
    else{
        Node* P = array;
        while(P -> next != NULL){
           P = P -> next;
        }
        P -> next = Head;
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

void read_array(Node*& array){
    int num = 1;
    while(num != 0){
        cout << "Type a number: ";
        cin >> num;
        if(num != 0){
            append(array, num);
        }
    } 
}

bool concatenate_array(Node*& array, Node*& array2){
    if(array == NULL && array2 == NULL){
        return false;
    }
    else if(array == NULL){
        array = array2;
        return true;
    }
    else if(array2 == NULL){
        return true;
    }
    else{
        Node* P = array;
        while(P -> next != NULL){
            P = P -> next;
        }
        P -> next = array2;
        return true;
    }

}

int highest(Node* array){
    int highest = array -> value;
    Node* P = array;
    while(P != NULL){
        if (P -> value > highest){
            highest = P -> value;
        }
        P = P -> next;
    }

    return highest;

}

int smallest(Node* array){
    int smallest = array -> value;
    Node* P = array;
    while(P != NULL){
        if (P -> value < smallest){
            smallest = P -> value;
        }
        P = P -> next;
    }

    return smallest;

}

void pop(Node*& array){
    if(array == NULL){
        cout << "Emity array";
    }
    else{
        Node* P = array;
        while(P -> next -> next != NULL){
            P = P -> next;
        }
        delete P -> next;
        P -> next = NULL;
    }
}

int main(){
    Node* array = create_array();
    Node* array2 = create_array();

    int big, small;

    cout << "Reading a array 01" << endl;
    read_array(array);
    
     cout << "Reading a array 02" << endl;
    read_array(array2);

    pop(array);

    cout << "Printing array 01" << endl;
    printl(array);
    
    cout << "Printing array 02" << endl; 
    printl(array2);
    


    if (concatenate_array(array, array2)){
        cout << "Array concatenate: ";
        printl(array);
    }
    else{
        cout << "Error.";
    }

    big = highest(array);
    cout << "The highest number in array is: " << big;

    small = smallest(array);
    cout << "the smallest number in array is: " << small;
    
    return 0;
}