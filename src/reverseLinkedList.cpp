/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	
	if (head == NULL)
		return NULL;
	
	else
	{
		struct node* newnodeptr;
		int A[10],i,j,k;
		newnodeptr = head;

		for (i = 0; newnodeptr != NULL; i++)//storing values in array
		{
			A[i] = newnodeptr->num;
			newnodeptr = newnodeptr->next;
		}
		newnodeptr = head;
		k = i - 1;
		while (k>=0)
		{
			newnodeptr->num = A[k];
			newnodeptr = newnodeptr->next;
			k = k - 1;
		}
		return head;
	}
}
