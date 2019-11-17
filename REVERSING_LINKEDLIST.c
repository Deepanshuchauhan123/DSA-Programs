#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;
void createList(int n);
void displayList();
void reverse();
void reverse_itr(struct node *prev,struct node *curr);
int main()
{
    int n;
    printf("Enter nodes in LinkedList::\t");
    scanf("%d",&n);
    createList(n);
    printf("DISPLAY DATA IS \n");
    displayList();
    /*printf("After reversing data with Iteration:\n");
    reverse();
    displayList();*/
    printf("After reversing data with recursion :\n");
    reverse_itr(NULL,head);
    displayList();
}

void createList(int n)
{
    int data,i;
    struct node *newnode,*temp;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
        printf("Unable to allocate memory");
    else
    {
    printf("Enter data of Node 1.\t");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Unable to allocate memory");
    else
    {
        printf("Enter data of Node %d \t",i);
        scanf("%i",&data);

        newnode->data=data;
        newnode->next=NULL;

        temp->next=newnode;
        temp=newnode;
    }
    }
    }
}
void displayList()
{

struct node *temp;
if(head==NULL)
    printf("List is Empty");
  else{
temp=head;
while(temp)
{
    printf("DATA :\t%d \n",temp->data);
    temp=temp->next;
}
}
}
void reverse()
{
struct node *cur,*pre=NULL,*nextnode=NULL;
cur=head;
while(cur)
{
    nextnode=cur->next;
    cur->next=pre;
    pre=cur;
    cur=nextnode;

}
head=pre;
}
void reverse_itr(struct node *prev,struct node *curr)
{
if(curr)
{
reverse_itr(curr,curr->next);
curr->next=prev;
}
else
    head=prev;
}









