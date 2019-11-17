#include<stdio.h>
void push_x();
void push_y();
void pop_x();
void pop_y();
void display_x();
void display_y();

#define max 10
 int array[max],top_X=-1,top_Y=max;
int main()
{
    int choice;
    while(1)
    {
    printf("\n Enter the operation \n");
    printf("1. PUSH IN X \n 2. PUSH IN Y \n 3. pop from X \n 4. pop from Y \n 5. Display X\n 6. Display Y\n 7.EXIT\n");
    printf("Enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        push_x();
        break;
    case 2:
        push_y();
        break;
    case 3:
        pop_x();
        break;
    case 4:
        pop_y();
        break;
    case 5:
        display_x();
        break;
    case 6:
        display_y();
        break;
    case 7:
        exit(0);
    default:
        printf("\n Enter a valid choice \n");
    }
    }
}


void push_x()
{
    int data;
if(top_X+1 ==top_Y)
{
    printf("\n Over flow \n");
    return;
}
printf("\n Enter the data \t");
scanf("%d",&data);
array[++top_X]=data;
}
void push_y()
{
    int data;
    if(top_Y-1==top_X)
    {
        printf("Over flow");
        return ;
    }
printf("\n Enter the data \t");
scanf("%d",&data);
array[--top_Y]=data;
}
void pop_x()
{
if(top_X==-1)
{
    printf("\n Under flow \n");
    return;
}
int value=array[top_X--];
printf("POPED value from X is :\t %d",value);
}
void pop_y()
{
if(top_Y==max)
{
    printf("\n Under flow \n");
    return;
}
int value=array[top_Y++];
printf("POPED value from X is :\t %d",value);
}
void display_x()
{
if(top_X==-1)
{
    printf("\n Empty \n");
    return;
}
for(int i=0;i<=top_X;i++)
    printf("DATA  :%d",array[i]);
}
void display_y()
{
if(top_Y==max)
{
    printf("\n Empty \n");
    return;
}
for(int i=max-1;i>=top_Y;i--)
    printf("DATA  :%d",array[i]);
}















