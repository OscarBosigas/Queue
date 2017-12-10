#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"
#include <iostream>

template<class T>
Node<T>::Node() {
}

template<class T>
Node<T>::Node(const Node& orig) {
}

template<class T>
Node<T>::~Node() {
}

template<class T>
Node<T>::Node(T *info) {
    this->info = info;
    this->nextNode = NULL;
}

template<class T>
Node<T>::Node(T *info, Node<T> *node) {
    this->info = info;
    this->nextNode = node;
}

template<class T>
T* Node<T>::getInfo() {
    return this->info;
}

template<class T>
void Node<T>::setInfo(T *inf) {
    this->info = inf;
}

template<class T>
Node<T>* Node<T>::getNext() {
    return this->nextNode;
}

template<class T>
void Node<T>::setNext(Node<T> *node) {
    this->nextNode = node;
}

#endif /* NODE_H */
