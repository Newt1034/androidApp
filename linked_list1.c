#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void addNode(struct Node* head ,int data){
	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	head->next=newNode;
}


int main(){
    struct Node *head;
    addNode(head,14);
    
    return 0;
}

