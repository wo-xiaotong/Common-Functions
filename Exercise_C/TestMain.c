#include <stdio.h>
#include "list.h"



int main()
{
	node* head=NULL;
	init_list(&head);

	printf("%x %x %x\n",head,head->next,head->prev);
	int i=1;
	int j=2;
	list_insert_head(head,&i);
	list_insert_tail(head,&j);
	list_insert_head(head,&i);
	list_insert_tail(head,&j);
	list_insert_tail(head,&i);

	print_list(head,list_print_node);
	list_print_node(head->data);
	list_print_node(head->next->data);
	printf("%d\n",list_compare_node(head->next,head->next->next));
	printf("%d\n",list_count(head));

	print_list(head,list_print_node);
	list_delete(head,&i,list_compare_node);
	list_delete(head,&i,list_compare_node);
	list_delete(head,&i,list_compare_node);
	list_delete(head,&i,list_compare_node);
	list_delete(head,&j,list_compare_node);
	list_delete(head,&j,list_compare_node);
	list_delete(head,&j,list_compare_node);
	print_list_reverse(head,list_print_node);
	printf("%d\n",list_count(head));

	list_insert_head(head,&i);
	list_insert_tail(head,&j);
	list_insert_head(head,&i);
	list_insert_tail(head,&j);
	list_insert_tail(head,&i);

	printf("%d \n",free_list(&head));
	printf("%x \n",head);
	print_list(head,list_print_node);

	return 0;
}
