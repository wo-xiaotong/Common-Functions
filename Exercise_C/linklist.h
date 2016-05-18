#ifndef LINKLIST_H
#define LINKLIST_H


#include <stdio.h>
#include <stdlib.h>

/**
	@usage:

	linklist* head;
	init_list(&head);

	int i=1;
	int j=2;
	list_insert_head(head,&i);
	list_insert_head(head,&j);

	printf("%d\n",*(int*)list_get_head(head));
	printf("%d\n",*(int*)list_get_tail(head));
	list_delete_tail(head);
	printf("%d\n",list_count(head));
	list_delete_head(head);
	list_delete_tail(head);
	printf("%d\n",list_count(head));
	list_delete_head(head);
	list_delete_tail(head);
	printf("%d\n",list_count(head));
	print_list(head,list_print_node);
	
	int A[100];
	srand(time(NULL));

	int cnt=100;
	while(cnt--){
		A[cnt]=rand()%100;
		list_insert_head(head,A+cnt);
	}
	
	//printf("%d\n",list_count(head));
	//printf("%d\n",*(int*)list_at(head,10));
	int i=50;
	list_sort(head,list_compare_node);
	while(list_delete(head,&i,list_compare_node));
	print_list(head,list_print_node);
*/

typedef struct linklist{
	void* data;
	struct linklist* prev;
	struct linklist* next;
}linklist;

static int init_list(linklist** head)
{
	*head=(linklist*)malloc(sizeof(linklist));
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

static int list_insert_head(linklist* head,void* data)
{
	if(head==NULL)return 0;
	linklist* p=(linklist*)malloc(sizeof(linklist));
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

static int list_insert_tail(linklist* head,void* data)
{
	if(head==NULL)return 0;
	linklist* p=(linklist*)malloc(sizeof(linklist));
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

static void* list_get_head(linklist* head)
{
	if(head==NULL || head->next==head)return NULL;
	return head->next->data;
}

static void* list_get_tail(linklist* head)
{
	if(head==NULL || head->prev==head)return NULL;
	return head->prev->data;
}

static int list_delete_head(linklist* head)
{
	if(head==NULL || head->next==head)return 0;
	linklist* p=head->next;
	head->next=p->next;
	p->next->prev=head;
	free(p);
	*(int*)(head->data)-=1;
	return 1;
}

static int list_delete_tail(linklist* head)
{
	if(head==NULL || head->prev==head)return 0;
	linklist* p=head->prev;
	head->prev=p->prev;
	p->prev->next=head;
	free(p);
	*(int*)(head->data)-=1;
	return 1;
}

static void* list_at(linklist* head,int n)
{
	if(head==NULL)return NULL;
	int size=*(int*)head->data;
	if(n<0 || n>=size)return NULL;

	linklist* p=head->next;
	while(n--)p=p->next;
	return p->data;
}

static void list_sort(linklist *head,int (*compare)(void*,void*))
{
	int size=*(int*)head->data;
	if(size==0)return ;

	//bubble sort
	int flag=1;
	for(linklist* begin=head->next,*end=head->prev;begin!=end && flag==1;end=end->prev){
		for(linklist* index=begin;index!=end;index=index->next){
			if(compare(index->data,index->next->data)){
				void* temp=index->data;
				index->data=index->next->data;
				index->next->data=temp;
				flag=1;
			}
		}
	}
}

static int list_count(linklist* head)
{	
	if(head==NULL)return 0;
	return *(int*)(head->data);
}

//define by yourself according to the data type
static int list_compare_node(void* lhs,void* rhs)
{
	return *(int*)(lhs)>=*(int*)(rhs);
}

static int list_delete(linklist* head,void* d,int(*compare)(void*,void*))
{
	if(head==NULL)return 0;
	linklist* p=head->next;
	while(p!=head){
		if(compare(p->data,d)){
			p->prev->next=p->next;
			p->next->prev=p->prev;
			free(p);
			*((int*)(head->data))-=1;
			return 1;
		}
		p=p->next;
	}
	return 0;
}

static int free_list(linklist** head)
{
	if(*head==NULL)return 0;
	int cnt=0;
	linklist* p=(*head)->next;
	linklist* q;
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

static void print_list(linklist* head,void(*print)(void*))
{
	if(head==NULL)return ;
	linklist* p=head->next;
	while(p!=head){
		print(p->data);
		p=p->next;
	}
}

static void print_list_reverse(linklist* head,void(*print)(void*))
{
	if(head==NULL)return ;
	linklist* p=head->prev;
	while(p!=head){
		print(p->data);
		p=p->prev;
	}
}

#endif
