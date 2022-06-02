// 2 - WAP to reverse array using swapping

#include<stdio.h>
void main()
{
    int arr[100],n,i,t,end;
    printf("enter the number of elements");
    scanf("%d",&n);
    end=n-1;
    printf("enter the number:");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n/2;i++)
    {
        t=arr[i];
        arr[i]=arr[end];
        arr[end]=t;
        end--;
    }
    printf("\n revesed array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
}