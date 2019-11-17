#include<stdio.h>
int binary_search(int a[],int i,int j,int x)
           {
           int mid =(i+j)/2;
           if(i<j)
           {
               if(a[mid]==x)
                return mid;
               if(a[mid]>x)
               return binary_search(a,i,mid-1,x);
                if(a[mid]<x)
                return binary_search(a,mid+1,j,x);
           }
           if(i==j)
           {
               if(a[mid]==x)
                return mid;
               else
                return -1;
           }
           }
int main()
{
    int a[100],n,i,j,x;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
         printf("Enter the element to be searched::");
        scanf("%d",&x);
      int result=binary_search(a,0,n-1,x);
      (result==-1)?printf("not found "):printf("Element found at %d ",result+1);
}
