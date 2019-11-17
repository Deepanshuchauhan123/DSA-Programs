#include<stdio.h>
int quicksort(int ar[20],int i,int j)
{
int left=0,n,pivot,right;
    pivot=ar[i];
for(right=1;right<j;right++)
if(ar[right]<pivot)
    {
        left++;
        int t=ar[left];
        ar[left]=ar[right];
        ar[right]=t;
    }
int p=ar[0];
ar[0]=ar[left];
ar[left]=p;
quicksort(ar,i,left-1);
quicksort(ar,left+1,j);

return ar;
}
int main()
{ int j,a[20],right,i=0;
  printf("Enter no.of elements??:");
    scanf("%d",&j);
 printf("Enter elements:");
for(right=0;right<j;right++)
    scanf("%d",&a[right]);
    quicksort(a,i,j);
    printf("\n After sorting:\n");
for(right=0;right<j;right++)
    scanf("%d",&a[right]);
}
