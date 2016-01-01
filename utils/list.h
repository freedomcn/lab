#ifndef __LIST_H__
#define __LIST_H__

#include <stdlib.h>
#include <stdio.h>

typedef struct __list_node {
	void *data;
	struct __list_node *next;
}list_node;

static inline int init_list(list_node **head)
{
	*head = malloc(sizeof(list_node));
	if (!head) {
		printf("no space for head\n");
		return -1;
	}

	(*head)->next = NULL;

	return 0;
}

static inline void deinit_list(list_node **head)
{
	list_node *cur = *head;
	list_node *del = NULL;

	while (cur) {
		del = cur;
		cur = cur->next;
		free(del);
	}
}

#endif
