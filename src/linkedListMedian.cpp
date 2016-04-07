/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	
	if (head == NULL)
	{
		return -1;
	}

	int count = 0,i=0,sum=0,j=0;
	int middle;
	int result=0;
	struct node* nodeptr;
	nodeptr = head;

	while (nodeptr!=NULL)
	{
		count++;
		nodeptr = nodeptr->next;
	}
	nodeptr = head;
	middle = (count / 2);
	if (count % 2 == 0)
	{
		while (nodeptr != NULL)
		{
			i++;
			if (i == middle)
			{
				sum = sum + nodeptr->num;
			}
			else if (i == middle + 1)
			{
				sum = sum + nodeptr->num;
			}
			nodeptr = nodeptr->next;
		}
		result = (sum / 2);
		
	}
	else
	{
		
		nodeptr = head;

		while (nodeptr != NULL)
		{
			j++;
			if (j == (middle + 1))
			{
					result = nodeptr->num;
			}
			nodeptr = nodeptr->next;
		}
		
	}
	return result;
}


	

	
	

