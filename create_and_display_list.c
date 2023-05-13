#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void create_node(int);
int main(){
	int n;
	printf("enter the number of nodes");
	scanf("%d",&n);
	create(n);
}
void create_node(int nodes){
	struct node *p=NULL, *q=NULL, *head=NULL;
	int i;
	p=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&p->data);
	p->next=NULL;
	head=p;
	q=p;
	for(i=1;i<nodes;i++){
		p=(struct node*)malloc(sizeof(struct node));
	    scanf("%d",&p->data);
	    p->next=NULL;
	    q->next=p;
	    q=q->next;
	}
	struct node *pointer;
	pointer=head;
	while(pointer!=NULL){
		printf("%d ",pointer->data);
		pointer=pointer->next;
	}
}
