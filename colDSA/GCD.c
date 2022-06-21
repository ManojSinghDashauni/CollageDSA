#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,i,gcd;
    printf("enter the A and B : ");
    scanf("%d %d",&a,&b);
    
    for(i=1;i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("GCD of numbers %d and %d is %d",a,b,gcd);
    getch();
    return 0;
}

/*
OUTPUT

enter the A and B : 21 7
GCD of numbers 21 and 7 is 7
*/
