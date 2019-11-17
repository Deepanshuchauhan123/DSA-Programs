#include<stdio.h>
int main()
{
    int a[20],i,n,j,temp,min;
    printf("Enter no.of elements in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {    min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
     printf("\nAfter selection sorting: \n");
    for(i=0;i<n;i++)
    printf("\t %d",a[i]);
    return 0;
}
