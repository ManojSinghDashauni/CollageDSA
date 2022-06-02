// 1 - WAP to print second non – repeating number

#include<stdio.h>
void main()
{
    int arr[20];
    int i,j,n,c=0,d=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the number:");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                c++;
            }
        }
        if(c==0)
        d++;
        if(d==2)
        {
            printf("\n second non repeating number is :%d",arr[i]);
            break;
        }
    }
}