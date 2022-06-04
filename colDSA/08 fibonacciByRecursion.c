// 8 - WACP to print Fibonacci series by using recursion method
#include <stdio.h>
int fibonacci(int);
int main()
{
    int num,i,c=0;
    printf("enter the number : ");
    scanf("%d",&num);
    printf("Fibonacci series terms are : \n");
    for(i=1;i<=num;i++){
        printf("%d\n",fibonacci(c));
        c++;
    }
    return 0;
}

int fibonacci(int num){
    if(num==0 || num==1){
        return num;  
    }
    else{
        return (fibonacci(num-1)+fibonacci(num-2));
    }
}
