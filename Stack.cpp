#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.h"

template<typename T>
Stack<T>::Stack()
{
    this->top = NULL;
}

template<typename T>
Stack<T>::~Stack()
{
    //dtor
}

template<typename T>
bool Stack<T>::isEmpty(){
    return this->top == NULL;
}

template<typename T>
void Stack<T>::push(T* info){
        this->top = new DoubleNode<T>(info, top, NULL);
        this->top->setNext(this->top);
}

template<typename T>
T* Stack<T>::pop(){
    T* aux = this->top->getInfo();
    this->top = this->top->getNext();
    return aux;
}


#endif // STACK_CPP
