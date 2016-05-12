#include <stdio.h>
#include <stdlib.h>

typedef struct linknode{
	void* data;
	struct linknode* prev;
	struct linknode* next;
}node;

int init_list(node** head)
{
	*head=(node*)malloc(sizeof(node));
	if(*head==NULL){
		return -1;
	}
	(*head)->next=*head;
	(*head)->prev=*head;
	int* d=(int*)malloc(sizeof(int));
	if(d==NULL){
		return -1;
	}
	*d=0;
	(*head)->data=d;
	return 1;
}

node* list_make_node(void* data)
{
	node* n=(node*)malloc(sizeof(node));
	if(n==NULL){
		return NULL;
	}

	n->data=data;
	return n;
}

int list_insert_head(node* head,node* p)
{
	p->next=head->next;
	head->next=p;
	p->prev=head;
	p->next->prev=p;
	
	*((int*)(head->data))+=1;
	return 0;
}

int list_insert_tail(node* head,node* p)
{
	head->prev->next=p;
	p->prev=head->prev;
	head->prev=p;
	p->next=head;
	*((int*)(head->data))+=1;
	
	return 0;
}

int list_count(node* head)
{	
	return *(int*)(head->data);
}

//define by yourself according to the data type
int list_compare_node(node* lhs,node* rhs)
{
	return *(int*)(lhs->data)==*(int*)(rhs->data);
}

int list_delete(node* head,node* d,int(*compare)(node*,node*))
{
	node* p=head->next;
	while(p!=head){
		if(compare(p,d)){
			
			return 1
		}
		p=p->next
	}
	return -1;
}

int free_list(node* head)
{
	
}

//define by yourself according to the data type
void list_print_node(node* p)
{
	printf("%d\n",*(int*)p->data);
}

void print_list(node* head,void(*print)(node*))
{
	node* p=head->next;
	while(p!=head){
		print(p);
		p=p->next;
	}
}

int main()
{
	node* head=NULL;
	init_list(&head);
/*
	printf("%x %x %x\n",head,head->next,head->prev);
	int i=1;
	int j=2;
	list_insert_head(head,list_make_node(&i));
	list_insert_tail(head,list_make_node(&j));
	list_insert_head(head,list_make_node(&i));
	list_insert_tail(head,list_make_node(&j));
	list_insert_tail(head,list_make_node(&i));

	print_list(head,list_print_node);
	list_print_node(head);
	list_print_node(head->next);
	printf("%d\n",list_compare_node(head->next,head->next->next));
	printf("%d\n",list_count(head));
*/
	return 0;
}
