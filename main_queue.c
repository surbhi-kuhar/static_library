#include "queue.h"
#include<stdio.h>


int main(){


	struct Queue q;
	initialize(&q);

	insert(&q,100);
	insert(&q,200);
	insert(&q,300);

	printf("Top element of queue %d\n",peek(&q));
	pop(&q);
	printf("Top element of queue %d\n", peek(&q));
	pop(&q);
	printf("Top element of queue %d\n", peek(&q));
	pop(&q);
	printf("Is queue empty? %d\n", isEmpty(&q));

	return 0;

}
