#define n 100

struct Stack{
	int arr[n];
	int top;
};

void createStack(struct Stack* stack);
void push(struct Stack*stack,int data);
void pop(struct Stack *stack);
int isEmpty(struct Stack *stack);
int isFull(struct Stack *stack);
int peek(struct Stack*stack);
