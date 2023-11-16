#include <iostream>
using namespace std;

struct Person{
    string name;
    string cpf;
    int age;
    Person* next;
};

Person* create_array(){
    return NULL;
}

Person* read(Person*& add){

    add = new Person;

    cout << "Type your name: ";
    cin  >> add -> name;

    cout << "Type your cpf: ";
    cin >> add -> cpf;

    cout << "Type your age: ";
    cin >> add -> age;

    add -> next = NULL;

    return add;
}

void append(Person*& array, Person*& add){

    if(array == NULL){
        array = add;
    }
    else{
        Person* P = array;
        while(P -> next != NULL){
            P = P -> next;
        }
        P -> next = add;
    }

}

void insert(Person*& array, Person*& add, int pos){
    int count = 0;
    if(pos == 0){
        add -> next = array;
        array = add;
    }
    else{
        Person* P = array;
        while(P -> next != NULL && count < pos - 1){
            P = P-> next;
            count++;
        }
        if(P == NULL){
            cout << "invalid pos";
        }
        else{
            add -> next = P;
            P -> next = add;
        
        }
    }
}

void remove(Person*& array, int pos){
    int count = 0;
    if(pos == 0){
        Person* del = array;
        array = array -> next;
        delete del;
    }
    else{
        Person* P = array;
        while(P != NULL && count < pos - 1){
            P = P -> next;
            count++;
        }
        if( P == NULL || P -> next == NULL){
            cout << "Invalid pos;";
        }
        else{
            Person* del = P;
            P = P -> next;
            delete del;
        }
    }   
}

void printl(Person* array){
    if (array == NULL){
        cout << "emity array";
    }
    else{
        Person* P = array;
        while(P != NULL){
            cout << "Name: " << P -> name << endl;
            cout << "Age: " << P -> age << endl; 
            cout << "cpf: " << P -> cpf << endl;
            P = P -> next;
        }
    }
}

int main(){
    int flag;
    Person* array = create_array();
    Person* add = create_array();

    while(true){

        cout << "1 add new person;";


        cin >> flag;

        switch (flag){

        case 1:
            cout << "Add new person to end of list" << endl;
            read(add);
            append(array, add);
            add = NULL;
            break;
        
        case 2:
            printl(array);
        default:
            break;
        }
    }
}