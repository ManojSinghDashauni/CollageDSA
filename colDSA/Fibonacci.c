// 8 - WAP to display Fibonacci series
#include<stdio.h>

int main()
{
    int a=0,b=1,c,n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}