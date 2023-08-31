#define size 100

struct Queue{
	int arr[size];
	int rear;
	int front;
};


void initialize(struct Queue* q);
void insert(struct Queue* q,int value);
int isFull(struct Queue* q);
int isEmpty(struct Queue* q);
void pop(struct Queue* q);
int peek(struct Queue *q);

