// 3 - WAP to find common elements in array

#include<stdio.h>
void main()
{
    int arr[20];
    int i,j,n;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the number:");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Duplicate elements are: ");
    
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
                printf("%d\n",arr[i]);
           }
        }
    }
}