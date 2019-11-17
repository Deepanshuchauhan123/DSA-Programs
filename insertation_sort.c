#include<stdio.h>
int main()
{
    int key,i,j,a[20],n;
    printf("Enter no.of Elements:\t");
    scanf("%d",&n);
    printf("Enter the elements::");
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);
    for( i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("Sorted by Insertation sort::\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
