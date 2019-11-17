#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int array[MAX],top=-1;

void push();
void pop();
void display();
int main()
{
    int n;
    while(1)
    {
        printf("\n Enter the Operation to be performed\n");
        printf("1. Insert(PUSH) \n 2. Delete(POP) \n 3.Display \n 4. EXIT \n");
        printf("Enter YOUR choice \t");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            push(array);
            break;
        case 2:
            pop(array);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter a valid choice ");
            break;
        }
    }
}
void push(int array[])
{
    int data;
    if(top==MAX-1)
    {
        printf("\n Overflow \n");
        return;
    }
printf("Enter the element :\t");
scanf("%d",&data);
array[++top]=data;
}
void pop()
{
if(top==-1)
{
    printf("\n Under flow \n");
    return;
}
int value=array[top--];
printf("POPED Element is \t %d",value);
}
void display()
{
    printf("Elements in Stack are: \n");
for(int i=0;i<=top;i++)
    printf("\n DATA : %d",array[i]);
}















