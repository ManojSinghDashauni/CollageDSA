#include <stdio.h>
#include <conio.h>
int main()
{
    int i=0,fact=1,num;
    printf("enter the value of num : ");
    scanf("%d",&num);
    for(i=num;i>0;i--){
        fact*=i;
    }
    printf("the fatorial of %d is : %d",num,fact);
    getch();
    return 0;
}

/*
OUTPUT

enter the value of num : 5
the fatorial of 5 is : 120
*/
