#include<iostream>
#include "stack.h"

int main() {
    Pila p;
    p.Push(4);
    p.Push(3);
    p.Push(8);
    p.Print();
    std::cout<<std::endl<<"Salio el: "<<p.Pop()<<std::endl;

    std::cout<<std::endl<<"// Estado de la pila"<<std::endl;
    p.Push(12);
    p.Print();

    return 0;
}
