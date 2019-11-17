#include<stdio.h>
int main()
{
int a[20],left=0,right,n,pivot,i=0;
printf("Enter no.of elements:");
scanf("%d",&n);
for(right=0;right<n;right++)
    scanf("%d",&a[right]);
    pivot=a[i];
for(right=1;right<n;right++)
if(a[right]<pivot)
{   left++;
    int t=a[left];
    a[left]=a[right];
    a[right]=t;
}
int p=a[0];
a[0]=a[left];
a[left]=p;
printf("%s%d\n","Positon of pivot is:",left+1);
for(right=0;right<n;right++)
    printf("%d\t",a[right]);

return 0;
}
