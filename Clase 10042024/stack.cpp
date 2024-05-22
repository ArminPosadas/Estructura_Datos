#include "stack.h"
#include<iostream>

bool Pila::Empty() {
    return (this->start == NULL);
}

void Pila::Push(int value) {
    Node *tmp = new(Node);
    tmp->value = value;
    if (!this->Empty()) {
        tmp->next = this->start;
        this->start = tmp;
    }
    else {
        tmp->next = NULL;
        this->start = tmp;
    }
}

int Pila::Pop() {
    if (!this->Empty()) {
        int value = this->start->value;
        this->start = this->start->next;
        return value;
    }

    return -1;
}

void Pila::Print() {
    if (!this->Empty()) {
        Node *tmp = this->start;
        std::cout<<"Cima de la pila: "<<tmp->value<<std::endl;
        tmp = tmp->next;
        while (tmp != NULL) {
            std::cout<<"                 "<<tmp->value<<std::endl;
            tmp = tmp->next;
        }
    } else {
        std::cout<<"La pila esta vacía."<<std::endl;
    }
}