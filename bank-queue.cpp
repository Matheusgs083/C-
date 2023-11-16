#include <iostream>
using namespace std;

struct QueueNode{
    string name;
    bool priority;
    QueueNode* next;
};

struct Description{
    QueueNode* first;
    QueueNode* last;
};

Description* createqueue(){
    Description* Queue = new Description;
    Queue -> first = NULL;
    Queue -> last = NULL;
    return Queue;
}

void toqueue(Description* Queue, string name, bool priority){
    QueueNode* client = new QueueNode;
    client -> name = name;
    client -> priority = priority;
    client -> next = NULL;

    if(Queue -> first == NULL){
        Queue -> first = client;
        Queue -> last = client;
    }
    else{
        if(priority){
            QueueNode* current = Queue -> first;
            QueueNode* prev = NULL;

            while(current != NULL && (current -> priority == true)){
                prev = current;
                current = current -> next;
            }

            if (prev == NULL){
                client -> next = Queue -> first;
                Queue -> first = client;
            }
            else{
                client -> next = prev -> next;
                prev -> next = client;
            }
            if (current == NULL){
                Queue -> last = client;
            }
        }
        else{
            Queue -> last -> next = client;
            Queue -> last = client;
        }
    }
}

void tomeet(Description* Queue){
    QueueNode* aux = Queue -> first;
    while(aux != NULL){
        cout << "Atendendo o cliente: " << aux -> name << ", Prioritario? " << aux -> priority << endl;
        aux = aux -> next;
        
    } 
}

int main(){ 
    
    Description* queue = createqueue();
    
    toqueue(queue, "matheus", false);
    toqueue(queue, "evellyn", true);
    toqueue(queue, "kaua", false);

    tomeet(queue);

}