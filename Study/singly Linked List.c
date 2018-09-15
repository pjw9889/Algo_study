#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node * nextNode;
} Node;

Node * createNode(int newData)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	
	newNode->data = newData;
	newNode->nextNode = NULL;

	return newNode;
}

void destroyNode(Node * Node){
	free(Node);
}

void appendNode(Node** head, Node* newNode){
	
	if (*head == NULL)
		*head = newNode;
	else{
		Node* tail = *head;
		while (tail->nextNode != NULL){
			tail = tail->nextNode;
		}

		tail->nextNode = newNode;
	}
}

void removeNode(Node** head, Node* RemoveNode){
	if (*head == RemoveNode)
		*head = RemoveNode->nextNode;
	else{
		Node* current = *head;
		while (current != NULL && current->nextNode != removeNode)
			current = current->nextNode;

		if (current != NULL)
			current->nextNode = RemoveNode->nextNode;
	}
}

void insertNode(Node* current, Node* newNode){

	newNode->nextNode = current->nextNode;
	current->nextNode = newNode;
}

Node * getNodeat(Node* head, int index){
	Node* current = head;
	while (current != NULL && --index >= 0)
		current = current->nextNode;
	return current;
}

void main(){

	Node* list = NULL;

	Node * newNode = NULL;

	appendNode(&list, createNode(4));

}