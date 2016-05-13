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

static void* list_get_head(node* head)
{
	if(head==NULL || head->next==head)return NULL;
	return head->next->data;
}

static void* list_get_tail(node* head)
{
	if(head==NULL || head->prev==head)return NULL;
	return head->prev->data;
}

static int list_delete_head(node* head)
{
	if(head==NULL || head->next==head)return 0;
	node* p=head->next;
	head->next=p->next;
	p->next->prev=head;
	free(p);
	*(int*)(head->data)-=1;
	return 1;
}

static int list_delete_tail(node* head)
{
	if(head==NULL || head->prev==head)return 0;
	node* p=head->prev;
	head->prev=p->prev;
	p->prev->next=head;
	free(p);
	*(int*)(head->data)-=1;
	return 1;
}

static void* list_at(node* head,int n)
{
	if(head==NULL)return NULL;
	int size=*(int*)head->data;
	if(n<0 || n>=size)return NULL;

	node* p=head->next;
	while(n--)p=p->next;
	return p->data;
}

static void list_sort(node *head,int (*compare)(void*,void*))
{
	int size=*(int*)head->data;
	if(size==0)return ;

	//bubble sort
	int flag=1;
	for(node* begin=head->next,*end=head->prev;begin!=end && flag==1;end=end->prev){
		for(node* index=begin;index!=end;index=index->next){
			if(compare(index->data,index->next->data)){
				void* temp=index->data;
				index->data=index->next->data;
				index->next->data=temp;
				flag=1;
			}
		}
	}
}

static int list_count(node* head)
{	
	if(head==NULL)return 0;
	return *(int*)(head->data);
}

//define by yourself according to the data type
static int list_compare_node(void* lhs,void* rhs)
{
	return *(int*)(lhs)>=*(int*)(rhs);
}

static int list_delete(node* head,void* d,int(*compare)(void*,void*))
{
	if(head==NULL)return 0;
	node* p=head->next;
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

static int free_list(node** head)
{
	if(*head==NULL)return 0;
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
