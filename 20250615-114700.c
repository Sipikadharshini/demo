#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* link;
  };
  struct node* addatemp(struct node* head,int data)
  {
  struct node* temp = malloc(sizeof(struct node)); 
    temp->data=data;
    temp->link=NULL;
    head=temp;
    return head;
}
struct node* addatend (struct node* head, int data)
{
    struct node *tp;
    struct node* temp = malloc (sizeof (struct node));
    temp->data=data;
    temp->link=NULL;
    tp=head;
    while (tp->link!= NULL){
    tp = tp->link;
    }
tp->link=temp;
return head;
}
struct node* delin(struct node* head,int pos)
{
struct node* t,*tt;
t=head;
pos--;
while(pos>1)
{
t=t->link;
pos--;
}
tt=t->link;
t->link=tt->link;
free(tt);
tt=NULL;
return head ;
}
struct node* createlist (struct node* head)
{
int n,data,i;
printf("enter the num of elements:");
scanf("%d",&n);
printf("enter first element");
scanf("%d",&data);
head=addatemp(head,data);
for(i=1;i<n;i++)
{
printf("enter elements:");
scanf("%d",&data);
head=addatend(head,data);
}
return head;
}
int main()
{
struct node* head = NULL;
    struct node* ptr;
    head =createlist(head);
    ptr = head;
    while (ptr != NULL) {
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
  head=delin(head,3);
  ptr=head;
  printf("\nlist after deleting");
  while (ptr != NULL) {
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
  
    return 0;
}
    
