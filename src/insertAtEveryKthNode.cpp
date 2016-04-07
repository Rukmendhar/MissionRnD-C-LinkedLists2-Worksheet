/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	
	int l = K;
	struct node* currentnodeptr = NULL;
	struct node* previousnodeptr = NULL;
	struct node* temp=NULL;
	

	
	currentnodeptr = head;


	if (head == NULL || K<=0)
		return NULL;

	else
	{

		while (currentnodeptr != NULL)
		{

			if (l == 0)
			{
				temp = (struct node*)malloc(sizeof(struct node));
				temp->num = K;
				temp->next = NULL;
				previousnodeptr->next = temp;
				temp->next = currentnodeptr;
				l = K;

				previousnodeptr = temp;


			}
			else
			{
				printf(" %d", currentnodeptr->num);
				previousnodeptr = currentnodeptr;
				currentnodeptr = currentnodeptr->next;
				l--;
			}
		}
		if (l == 0)
		{
			temp = (struct node*)malloc(sizeof(struct node));
			temp->num = K;
			temp->next = NULL;

			previousnodeptr->next = temp;
		}

		return head;
	}
	
	
}
