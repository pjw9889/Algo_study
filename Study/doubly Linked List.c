#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct Node{

	int data;
	struct Node* nextNode;
	struct Node* prevNode;
} Node;

Node* createNode(int data){

	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->nextNode = NULL;
	newNode->prevNode = NULL;

	return newNode;
}

void destroyNode(Node* node){
	free(node);
}

void appendNode(Node** head, Node* newNode){
	if (*head == NULL)
		*head = newNode;

	else{
		Node* tail = *head;
		while (tail->nextNode != NULL)
			tail = tail->nextNode;
		tail->nextNode = newNode;
		newNode->prevNode = tail;
	}
}

void removeNode(Node** head, Node* RemoveNode){
	if (*head == RemoveNode){
		*head = RemoveNode->nextNode;
		if (*head != NULL)
			(*head)->prevNode = NULL;
		else{
			(*head)->prevNode = NULL;
			(*head)->nextNode = NULL;
		}
	}

	else{
		Node* temp = RemoveNode;
		RemoveNode->prevNode->nextNode = temp->nextNode;
		if (RemoveNode->nextNode != NULL)
			RemoveNode->nextNode->prevNode = temp->prevNode;
		RemoveNode->nextNode = NULL;
		RemoveNode->prevNode = NULL;
		destroyNode(RemoveNode);
	}
}

Node* getNode(Node* head, int index){
	Node* current = head;
	while (current != NULL && --index >= 0)
		current = current->nextNode;
	return current;
}

void main(){

	Node* list = NULL;
	Node* newNode = NULL;
	appendNode(&list, createNode(4));
	appendNode(&list, createNode(5));
	appendNode(&list, createNode(6));
	appendNode(&list, createNode(7));

	Node* searchedNode = getNode(list, 1);
	removeNode(&list, searchedNode);
}