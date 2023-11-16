#include <iostream>
using namespace std;

struct StackNode{
    int data;
    StackNode* next;
};

StackNode* create_stack(){
    return NULL;
}

void push(StackNode*& topo, int data){
    StackNode* aux = new StackNode;
    aux -> data = data;
    aux -> next = topo;
    topo = aux;
}

StackNode* pop(StackNode*& topo){
    if(topo == NULL){
        return NULL;
    }
    else{
        StackNode* aux = topo;  
        topo = topo -> next;
        aux -> next = NULL;
        return aux;
    }
}

void pop_2(StackNode*& topo){
    if(topo == NULL){
        return;
    }
    else{
        StackNode* aux = topo;
        topo = topo -> next;
        delete aux;
    }
}