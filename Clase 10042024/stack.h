#ifndef STACK_H
#define STACK_H

struct Node {
public:
    int value;
    Node *next;
};

struct Pila {
public:
    Node *start = 0;
    int Pop();
    void Push(int);
    bool Empty();
    void Print();
};

#endif