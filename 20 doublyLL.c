//Name- Manoj Singh Dashauni
//Section - F
//Roll No. - 12

//Objective: WACP to implement doubly linked list
//Description: In this program, the user is presented with a menu to create , insertion, deletion , count, display the elements and exit . Based on user choice, the program asks for input from user. The program will implement all doubly linked list operations.

#include<stdio.h>
#include<stdlib.h>
struct node
{
	 int data;
	 struct node *prev;
	 struct node *next;
};
typedef struct node NODE;
NODE *start=NULL;
void insert_beg();
void insert_end();
void delete_beg();
void delete_end();
void display();
int main()
{
	 int choice;
	 while(1)
	 {
		  printf("\n1.insert at beginning\n2.insert at end\n3.delete from begin\n4.delete from end\n5.display\n6.exit");
		  printf("\nenter the choice:");
		  scanf("%d",&choice);
  		  switch(choice)
  		{
  			case 1:insert_beg();
  				 break;
  			case 2:insert_end();
        				 break;
  			case 3:delete_beg();
  				  break;
			case 4:delete_end();
        	 			  break;
  			case 5:display();
        				 break;
  			case 6:exit(0);
  			default:printf("wrong choice");
  		} 	}}
void insert_end()
{
	NODE *temp,*ptr;
	temp=(NODE *)malloc(sizeof(NODE));
	int val;
	printf("\nenter the element to be insert:");
	scanf("%d",&val);
	temp->data=val;
	if(start==NULL)
	{
		temp->prev=NULL;
		start=temp;
	}
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	temp->prev=ptr;
}


void insert_beg()
{
	NODE *temp=NULL;
	int val;
	temp=(NODE *)malloc(sizeof(NODE));
	printf("\nenter the element to be insert:");
	scanf("%d",&val);
	temp->data=val;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
		start->prev=temp;
		start=temp;
	}
}
void delete_beg()
{
	 NODE *ptr;
	 ptr=start;
 	if(start==NULL)
 	{
 		printf("\n list is empty");
 	}
 	else
 	{
 	 	start=start->next;
  		start->prev=NULL;
 	}	
printf("deleted element is %d",ptr->data);
free(ptr);
}
void delete_end()
{
 	NODE *temp,*ptr;
 	temp=start;
 	ptr=start;
 	while(ptr->next!=NULL)
 	{
 		 temp=ptr;
 		 ptr=ptr->next;
 	}
 	temp->next=NULL;
 	ptr->prev=NULL;
 	printf("\ndeleted element is %d",ptr->data);
 	free(ptr);
}
void display()
{
 	NODE *temp;
 	temp=start;
 	while(temp->next!=NULL)
 	{
 		 printf("%d->",temp->data);
 		 temp=temp->next;
 	}
 	printf("%d->",temp->data);
}


/*
output


1.insert at beginning
2.insert at end
3.delete from begin
4.delete from end
5.display
6.exit
enter the choice:1

enter the element to be insert:4

1.insert at beginning
2.insert at end
3.delete from begin
4.delete from end
5.display
6.exit
enter the choice:2

enter the element to be insert:5

1.insert at beginning
2.insert at end
3.delete from begin
4.delete from end
5.display
6.exit
enter the choice:5
4->5->
1.insert at beginning
2.insert at end
3.delete from begin
4.delete from end
5.display
6.exit
enter the choice:1

enter the element to be insert:3

1.insert at beginning
2.insert at end
3.delete from begin
4.delete from end
5.display
6.exit
enter the choice:3
deleted element is 3
1.insert at beginning
2.insert at end
3.delete from begin
4.delete from end
5.display
6.exit
enter the choice:4

deleted element is 5
1.insert at beginning
2.insert at end
3.delete from begin
4.delete from end
5.display
6.exit
enter the choice:5
4->
1.insert at beginning
2.insert at end
3.delete from begin
4.delete from end
5.display
6.exit
enter the choice:6

*/
