#include "ll.h"
#include <stdio.h>


int main(){


	struct Node* head;
	createLL(&head);

	insertAtBegin(&head,1);
	insertAtBegin(&head,2);
	insertAtEnd(&head,3);
	insertAtEnd(&head,4);
	display(head);
	deleteEle(&head,4);

	display(head);

        return 0;

}
