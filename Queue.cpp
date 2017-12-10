#ifndef QUEUE_CPP
#define QUEUE_CPP

#include "Queue.h"

template<typename T>
Queue<T>::Queue() {
		this->head = NULL;
		this->tail = NULL;
	}

template<typename T>
bool Queue<T>::isEmpty(){
    return this->head == NULL;
}

template<typename T>
void Queue<T>::put(T* info){
    if (this->head == NULL) {
		this->head = this->tail = new DoubleNode<T>(info,head,NULL);
	} else {
		this->tail->getNext()->setNext(new DoubleNode<T>(info));
		this->tail->setNext(this->tail->getNext());
	}
}

template <typename T>
T* Queue<T>::get(){
		if (this->head != NULL) {
			DoubleNode<T>* aux = this->head;
			this->head->setNext(this->head->getNext());
			return aux->getInfo();
		} else {
			return NULL;
		}
	}

template<typename T>
int Queue<T>::size(){
		int counter = 0;
		DoubleNode<T>* aux = this.head;
		while (aux != NULL) {
			counter++;
			aux = aux->next;
		}
		return counter;
	}

template<typename T>
Queue<T>::~Queue()
{
    //dtor
}

#endif // QUEUE_CPP
