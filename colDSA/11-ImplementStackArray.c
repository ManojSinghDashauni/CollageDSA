//WACP to implement stack using array
#include <stdio.h>
#include<stdlib.h>
#define MAX 10

int stack[MAX];//array
int top=-1;

void push(int n);
int pop();
int peek();
void display();

void main(){
    int choice,n;
    while(1){
        printf("\n1.push\n2.pop\n3.peek\n4.display all stack elements\n5.exit\n");
        printf("enter the choice : ");
        scanf("%d",&choice);
        
        switch(choice){
        case 1: printf("enter the num to be pushed  : ");
        scanf("%d",&n);
        push(n);
        break;
        
        case 2: n=pop();
        printf("popped number is: %d\n",n);
        break;
        
        case 3:printf("the num at the top is : %d",peek());
        break;
        
        case 4: display();
        break;
        
        case 5:printf("EXIT \n");
        break;
        
        default:printf("wrong choice\n");
        }
    }
}

void push(int n){
    if(top==MAX-1){//-1==9  0==9
        printf("stack overflow\n");
    }
    top+=1;//-1+1=0  =0+1=1
    stack[top]=n;//0=number  1=number
}

int pop(){
    int x;
    if(top==-1){//0==-1
        printf("stack underflow\n");
    }
    x=stack[top];//num=1
    top=top-1;//1-1=0
    return x;
}

int peek(){
    if(top==-1){
        printf("stack underflow\n");
        exit(1);
    }
    return stack[top];
}

void display()
{
    int i;
    if(top==-1){
        printf("stack is empty\n");
    }
    printf("stack elements: \n");
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    printf("\n");
}