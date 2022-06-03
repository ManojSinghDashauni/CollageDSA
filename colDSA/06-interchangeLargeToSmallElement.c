// 6 - WAP to interchange largest and smallest element

#include<stdio.h>
void main()
{
    int i,temp,mat[5],max,min,maxpos,minpos;
    
    printf("Enter 5 element: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&mat[i]);
    }
    
    max=mat[0];
    min=mat[0];
    maxpos=0;
    minpos=0;
    
    for(i=1;i<5;i++)
    {
        if(mat[i]>max)
        {
            max=mat[i];
            maxpos=i;
        }
        if(mat[i]<min)
        {
            min=mat[i];
            minpos=i;
        }
        
    }
    
    temp=mat[maxpos];
    mat[maxpos]=mat[minpos];
    mat[minpos]=temp;
    
    printf("After interchange array elements are: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",mat[i]);
    }
}
