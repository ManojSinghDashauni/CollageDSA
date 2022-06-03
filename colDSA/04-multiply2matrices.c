// 4 - WAP to multiply two matrices

#include<stdio.h>
void main()
{
    int i,j,k,mat1[3][3],mat2[3][3],mat3[3][3]={0};
    printf("enter the matrix m1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&mat1[i][j]);
    }
    
    printf("enter the matrix m2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&mat2[i][j]);
    }
    
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
         for(k=0;k<3;k++)
         mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
    }
    
    printf("the product of matrices mat1 and mt2 is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d\t",mat3[i][j]);
        printf("\n");
    }
}
