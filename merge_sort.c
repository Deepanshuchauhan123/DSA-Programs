//Jai Sai Ram
#include<stdio.h>
void mergesort(int A[],int min ,int mid,int max)
{
    int l1,l2,i,b[30];
for(l1=min,l2=mid+1,i=min;l1<=mid && l2<=max;i++)
{
    if(A[l1]<A[l2])
        b[i]=A[l1++];
    else
        b[i]=A[l2++];
}
while(l1<=mid)
    b[i++]=A[l1++];
while(l2<=max)
    b[i++]=A[l2++];
for(i = min;i <= max;i++)
A[i]=b[i];
}
void sort(int A[],int min,int max)
{
    int mid;
    if(min<max)
    {   mid=(min+max)/2;
        sort(A,min,mid);
        sort(A,mid+1,max);
        mergesort(A,min,mid,max);
    }
}
int main()
{
    int n,i,A[30];
    printf("Enter no. of elements::\t");
    scanf("%d",&n);
    printf("Enter elements::\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        sort(A,0,n);
     for(i = 0; i < n; i++)
      printf("%d ", A[i]);
}
