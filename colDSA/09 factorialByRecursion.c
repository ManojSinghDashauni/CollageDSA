// 9 - WACP to print a factorial of a number by using recursion method
#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("enter a positive number : ");
    scanf("%d",&num);
    printf("factorial of %d = %d",num,factorial(num));
    return 0;
}

int factorial(int num){
    if(num>=1){
        return num*factorial(num-1);  
    }
    else{
        return 1;
    }
}
