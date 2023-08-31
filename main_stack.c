#include<stdio.h>
#include "stack.h"

int main(){


	struct Stack stack;
	createStack(&stack);

	push(&stack,100);
	push(&stack,200);
 
	while(!isEmpty(&stack)){
		printf("Top element is %d\n",peek(&stack));
		pop(&stack);
	}


	return 0;



}
