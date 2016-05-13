#include <stdio.h>
#include <stdlib.h>

typedef struct linknode{
	void* data;
	struct linknode* prev;
	struct linknode* next;
}node;

static int init_list(node** head)
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

static int list_insert_head(node* head,void* data)
{
	if(head==NULL)return 0;
	node* p=(node*)malloc(sizeof(node));
	if(p==NULL){
		return 0;
	}
	p->data=data;

	p->next=head->next;
	head->next=p;
	p->prev=head;
	p->next->prev=p;
	
	*((int*)(head->data))+=1;
	return 0;
}

static int list_insert_tail(node* head,void* data)
{
	if(head==NULL)return 0;
	node* p=(node*)malloc(sizeof(node));
	if(p==NULL){
		return 0;
	}
	p->data=data;

	head->prev->next=p;
	p->prev=head->prev;
	head->prev=p;
	p->next=head;
	*((int*)(head->data))+=1;
	
	return 0;
}

static int list_count(node* head)
{	
	if(head==NULL)return 0;
	return *(int*)(head->data);
}

//define by yourself according to the data type
static int list_compare_node(node* p,void* data)
{
	return *(int*)(p->data)==*(int*)(data);
}

static int list_delete(node* head,void* d,int(*compare)(node*,void*))
{
	if(head==NULL)return -1;
	node* p=head->next;
	while(p!=head){
		if(compare(p,d)){
			p->prev->next=p->next;
			p->next->prev=p->prev;
			free(p);
			*((int*)(head->data))-=1;
			return 1;
		}
		p=p->next;
	}
	return -1;
}

static int free_list(node** head)
{
	if(*head==NULL)return -1;
	int cnt=0;
	node* p=(*head)->next;
	node* q;
	while(p!=(*head)){
		q=p->next;
		free(p);
		p=q;
		++cnt;
	}
	free(p);
	*head=NULL;

	return cnt;
}

//define by yourself according to the data type
static void list_print_node(void* data)
{
	printf("%d\n",*(int*)data);
}

static void print_list(node* head,void(*print)(void*))
{
	if(head==NULL)return ;
	node* p=head->next;
	while(p!=head){
		print(p->data);
		p=p->next;
	}
}

static void print_list_reverse(node* head,void(*print)(void*))
{
	if(head==NULL)return ;
	node* p=head->prev;
	while(p!=head){
		print(p->data);
		p=p->prev;
	}
}
