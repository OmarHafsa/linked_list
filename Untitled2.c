#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}nodes;
void displaynode(nodes *);
nodes * createNodeList(int);
int main(){
int n;
nodes *C;
scanf("%d",&n);
C=createNodeList(n);
displaynode(C);
}
nodes * createNodeList(int node){
struct node *p, *head, *q;
int i;
p=(nodes*)malloc(sizeof(nodes));
scanf("%d",&p->data);
p->next=NULL;
head=p;
q=p;
for(i=1;i<node;i++){
p=(nodes*)malloc(sizeof(nodes));
scanf("%d",&p->data);
q->next=p;
q=q->next;
}
return head;
}
void displaynode(nodes *h){
while(h!=NULL){
printf("%d",h->data);
h=h->next;
}
}

