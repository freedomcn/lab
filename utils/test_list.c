#include <stdio.h>

#include "list.h"

int main()
{
	int ret;
	list_node *head;

	ret =  init_list(&head);
	printf("ret = %d\n", ret);

	deinit_list(&head);

	return ret;
}
