#include "ll.h"
#include <stdio.h>
#include <stdlib.h>

void createLL(struct Node** head){
	head = NULL;
}

void insertAtBegin(struct Node**head, int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
       if(newNode){
	       newNode->data = data;
	       newNode->next = *head;
	       *head = newNode;
       }	       
		
}

void insertAtEnd(struct Node** head, int data){

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        struct Node* temp = *head;

	while(temp->next!=NULL){
		temp = temp->next;
	}
	newNode->data = data;
	newNode->next = NULL;
	temp->next = newNode;	

}

void deleteEle(struct Node** head, int data){
	struct Node* curr = *head;
	struct Node* prev = NULL;

	while(curr!=NULL){
		if(curr->data == data){
			if(prev == NULL){
				*head = curr->next;
			}
			else{
				prev->next = curr->next;
			}
			free(curr);
			return;
		
		}
		prev = curr;
		curr = curr->next;

	}

}
void display(struct Node* head){
	while(head!=NULL){
		printf("%d->",head->data);
		head = head->next;
	}
	printf("NULL\n");

}


