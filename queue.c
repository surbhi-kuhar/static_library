#include "queue.h"
#include <stdlib.h>

void initialize(struct Queue* q){
	q->front = -1;
	q->rear = -1;
}

int isFull(struct Queue* q){
	return q->rear+1 == q->front;
}

int isEmpty(struct Queue* q){
	return q->front == -1;
}

void insert(struct Queue* q,int value){
	if(!isFull(q)){
		if(isEmpty(q)){
			q->front  = 0;
		}
		q->rear++;
		q->arr[q->rear] = value;
	}
}

void pop(struct Queue*q){

	if(!isEmpty(q)){
		q->front++;
	}
}

int peek(struct Queue* q){

	if(!isEmpty(q)){
		int value = q->arr[q->front];
		if(q->front == q->rear){
			q->front = -1;
			q->rear = -1;
		}
		return value;
	}
	return -1;
}


