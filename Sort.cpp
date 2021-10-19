#include "header.h"

bool list::sort()
{
	node* temp1 = head;
	int a = 0;
	while (temp1 != NULL)
	{
		node* temp = temp1->next;
		while (temp != NULL)
		{
			if (temp1->data < temp->data)
			{
				a = temp->data;
				temp->data = temp1->data;
				temp1->data = a;
			}
			temp = temp->next;
		}
		temp1 = temp1->next;
	}
	return true;
}