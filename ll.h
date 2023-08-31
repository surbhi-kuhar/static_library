struct Node{
	int data;
	struct Node* next;
};

void createLL(struct Node** head);
void insertAtBegin(struct Node** head,int data);
void insertAtEnd(struct Node** head, int data);
void deleteEle(struct Node** head,int data);
void display(struct Node* head);



