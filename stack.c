#include "stack.h"
#include <stdlib.h>

void createStack(struct Stack *stack){
	stack->top = -1;
}

int isFull(struct Stack* stack){
	return stack->top == n-1;
}

int isEmpty(struct Stack* stack){
	return stack->top == -1;
}
	
void push(struct Stack *stack,int data){
	if(!isFull(stack)){
		stack->top++;
		stack->arr[stack->top] = data;
	}
}

void pop(struct Stack *stack){
	if(!isEmpty(stack)){	
		stack->top--;
	}

}

int peek(struct Stack* stack){
	if(!isEmpty(stack)){
		return stack->arr[stack->top];
	}
	return -1;
}

