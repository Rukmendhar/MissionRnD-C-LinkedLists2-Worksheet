/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	
	if ((head1 == NULL) && (head2 == NULL))
		return NULL;
	else if ((head1 == NULL) && (head2 != NULL))
		return head2;
	else if ((head2 == NULL) && (head1 != NULL))
		return head1;
/*	else
	{
		struct node* result = (struct node*)malloc(sizeof(struct node)*(15));
		struct node* dup1=head1;
		struct node* dup2=head2;

		while (dup1 != NULL && dup2 != NULL)
		{
			if (dup1->num < dup2->num)
			{
				if (result==NULL)
				   result = dup1;
			}
	//		else

		}
		
		return result;
	}*/
}
