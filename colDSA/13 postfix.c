//Name- Manoj Singh Dashauni
//Section - F
//Roll No. - 12

//Objective: WACP to convert infix to postfix expression.
//Description: In this program user will ask to enter the infix expression and then display its equivalent postfix expression. 

#include <stdio.h>

int stack[20];
int top=-1;
void push(int x){
    stack[++top]=x;
}

int pop(){
    return stack[top--];
}

int main()
{
    char exp[20];
    char *e;
    int n1,n2,n3,num;
    printf("enter the expression : ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(isdigit(*e)){
            num=*e-48;
            push(num);
        }
        else{
            n1=pop();
            n2=pop();
            switch(*e){
                case'+':
                    n3=n1+n2;
                    break;
                case'-':
                    n3=n2-n1;
                    break;
                case'*':
                    n3=n1*n2;
                    break;
                case'/':
                    n3=n2/n1;
                    break;
            }
            push(n3);
        }
        e++;
    }
    printf("\nThe result of expresion %s = %d\n\n",exp,pop());

    return 0;
}

/*
output

enter the expression : 245+*

The result of expresion 245+* = 18
*/
