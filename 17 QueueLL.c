//Name- Manoj Singh Dashauni
//Section - F
//Roll No. - 12

//Objective: WACP to implement queue using linked list
//Description: In this program, the user is presented with a menu to Insert, delete, display the elements and exit. Based on user choice, the program asks for input from user. The program will implement all queue operations by using linked list.

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
NODE *front=NULL;
NODE *rear=NULL;
void insert(int);
void delet();
void display();

int main()
{
	 int choice,value;
 	while(1)
 	{
 		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
 		printf("\n Enter the choice:");
 		scanf("%d",&choice);
 		switch(choice){
  			case 1:printf("enter the value to be inserted:");
 	             		 scanf("%d",&value);
               			 insert(value);
               			 break;
  	 	         case 2:delet();
                                       break;
                            case 3:display();
                                       break;
                            case 4:exit(0);
                            default:printf("wrong choice");
                  }
           }
 }
 
void insert(int value){
  	NODE *tmp;
  	tmp=(NODE*)malloc(sizeof(NODE));
  	tmp->data=value;
  	tmp->next=NULL;
  	if(front==NULL)
  	    front=rear=tmp;
  	else{
  		rear->next=tmp;
  		rear=tmp;
  	}
}
  
void delet(){
  	if(front==NULL)
  	    printf("queue is empty");
  	else{
  		NODE *tmp=front;
  		front=front->next;
  		printf("deleted element:%d\n",tmp->data);
  		free(tmp);
  	}
}
  
void display(){
  	if(front==NULL)
  		 printf("\nqueue is empty");
 	else{
 			NODE *tmp=front;
 			while(tmp->next!=NULL)
			{
 				printf("%d->",tmp->data);
 				tmp=tmp->next;
 			}
 			printf("%d->\n",tmp->data);
 	        }
 }


/*
output

1.Enqueue
2.Dequeue
3.Display
4.Exit
 Enter the choice:1
enter the value to be inserted:5

1.Enqueue
2.Dequeue
3.Display
4.Exit
 Enter the choice:1
enter the value to be inserted:6

1.Enqueue
2.Dequeue
3.Display
4.Exit
 Enter the choice:1
enter the value to be inserted:7

1.Enqueue
2.Dequeue
3.Display
4.Exit
 Enter the choice:3
5->6->7->

1.Enqueue
2.Dequeue
3.Display
4.Exit
 Enter the choice:2
deleted element:5

1.Enqueue
2.Dequeue
3.Display
4.Exit
 Enter the choice:2
deleted element:6

1.Enqueue
2.Dequeue
3.Display
4.Exit
 Enter the choice:3
7->

1.Enqueue
2.Dequeue
3.Display
4.Exit
 Enter the choice:4

*/
