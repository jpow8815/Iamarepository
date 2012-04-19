#include "queue.h"
#include <iostream>

using namespace std;

queue::queue() {

	front = NULL;
	rear = NULL;

}


queue::~queue() {

	node* tmp;

	while(front != NULL ) {
		tmp = front;
		front = front->next;
		delete tmp;
	}
	rear = NULL;
		
}


bool queue::enqueue(char e) {

	node* tmp;
	tmp = new node;

	tmp->data = e;
	tmp->next = NULL;

	if(rear == NULL ){
		front = tmp;
	}

	else {
		rear->next = tmp;
	}
	rear = tmp;

}

bool queue::dequeue(char &d) {

	node* tmp;
	if(!empty()){
		tmp = front;
		d = front->data;
		front = front->next;


		if(front == NULL) {
			rear = NULL;
		}
		delete tmp;
	}
	else
		cout << "The queue is empty.";
}



bool queue::empty() const {

	return(front==NULL);	
}

bool queue::full() const {

	return false;
}	

bool queue::clear() {

	node* tmp;

	while(front != NULL) {
		tmp = front;
		front = front->next;
		delete tmp;
	}
	rear = NULL;

}
queue& queue::operator = (const queue &rhs) {
	
	node* tmp, tmp2, tmp3;

	if(this != &rhs){
		clear();
		tmp = rhs.front;
		while(tmp !=NULL){
			enqueue(tmp->data);
			tmp = tmp->next;
		}
	}
	return *this;
}

bool queue::operator == (const queue& rhs) const {
/*
	if (this->max == rhs.max && this->front == rhs.front && 
		this->rear == rhs.rear && this->data == rhs.data)
		return true;
*/
}

ostream& operator << (ostream& out, const queue& rhs) {
	
	queue rhs2;

	rhs2 = rhs;
	char output;
	while(!rhs2.empty()){
		rhs2.dequeue(output);
		out << output;
	}
	return out;	
} 
