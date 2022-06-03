// 5 - WAP to find transpose of a matrix

#include<stdio.h>
void main()
{
    int i,j,mat[3][3],tra[3][3];
    printf("enter the matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&mat[i][j]);
    }
    
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            tra[i][j]=mat[j][i];
        }
    }
    
    
    printf("tanspose of matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",tra[i][j]);
        }
        printf("\n");
    }
}
