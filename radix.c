#include<stdio.h>
int main()
{
    int n,i,a[100],max=0,k;
    printf("Enter total elements::");
    scanf("%d",&n);
    printf("Enter elements:::");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];
    }
   k= sizeof(max);


    return 0;

}
