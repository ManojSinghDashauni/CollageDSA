//Name : Manoj Singh Dashauni
//Section: F
//Roll No. : 12

//Objective: WACP to implement stack using linked list
//Description:  In this program, the user is presented with a menu to Push ,pop, peek, display the elements and exit . Based on user choice, the program asks for input from user. The program will implement all stack operations by using linked list.

#include<stdio.h>
#include<stdlib.h>
struct node{
	 int data;
	 struct node *next;
};

typedef struct node NODE;

NODE *top=NULL;

void push(int);
void pop();
int peek();
void display();
void main(){
	 int choice,value;
 	while(1){
 	    printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
		printf("\n enter the choice:");
		scanf("%d",&choice);
		switch(choice){
			 case 1:printf("enter the value to be inserted:");
         				   scanf("%d",&value);
              			   push(value);
             			   break;
 			case 2:pop();
             			 break;
 			case 3:peek();
           			 break;
			case 4:display();
        				  break;
			case 5:exit(1); 
        				 break;
			default:printf("wrong choice");
		 }
	 }
 }

void push(int value){
    NODE *tmp;
    tmp=(NODE *)malloc(sizeof(NODE));
    if(top==NULL){
        tmp->data=value;
        tmp->next=NULL;
        top=tmp;
}
    else{
  	    tmp->data=value;
  	    tmp->next=top;
  	    top=tmp;
    }
}

void pop(){
  	int x;
  	if(top==NULL)
  	      printf("\nstack underflow");
  	else{
  	    x=top->data;
  		top=top->next;
  		printf("popped element is:%d\n",x);
  	}
}


int peek(){
    int n;
    if(top==NULL)
        printf("\nstack underflow");
   	else{
   	    n=top->data;
     	printf("element at top is:%d\n",n);
   	}
}

void display(){
    NODE *ptr;
    ptr=top;
    if(top==NULL)
        printf("\nstack underflow");
    printf("Stack element is:\n");
	while(ptr!=NULL){
   		printf("%d\n",ptr->data);
        ptr=ptr->next;
	}
	printf("\n");
}


/*
output

1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT

 enter the choice:1
enter the value to be inserted:12

1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT

 enter the choice:1
enter the value to be inserted:13

1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT

 enter the choice:4
Stack element is:
13
12


1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT

 enter the choice:3
element at top is:13

1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT

 enter the choice:2
popped element is:13

1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT

 enter the choice:5
*/
 
 
