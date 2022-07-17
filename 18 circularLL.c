//Name- Manoj Singh Dashauni
//Section - F
//Roll No. - 12

//Objective: WACP to implement circular linked list
//Description: In this program, the user is presented with a menu to create , insertion, deletion , count, display the elements and exit . Based on user choice, the program asks for input from user. The program will implement all circular linked list operations.

#include<stdio.h>
#include<stdlib.h>
struct node
{
	 int data;
	 struct node *next;
};
struct node *start=NULL;
void create()
{
	struct node *new_node,*ptr;
	int val;                                   
	printf("enter the value:");
	scanf("%d",&val);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=val;
	if(start==NULL)
	{
		new_node->next=new_node;
		start=new_node;
	}
	else
	{
		ptr=start;
		while(ptr->next!=start)
		{
			ptr=ptr->next;
		}
		ptr->next=new_node;
		new_node->next=start;
	}
}

void insert_beg()
{
	struct node *new_node,*ptr;
	int val;
	printf("enter the value:");
	scanf("%d",&val);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=val;
	ptr=start;
	while(ptr->next!=start)
	{
		  ptr=ptr->next;
	}
	ptr->next=new_node;
	new_node->next=start;
	start=new_node;
} 
 
void insert_end()
{
	struct node *new_node,*ptr;
	int val;
	printf("enter the value:");
	scanf("%d",&val);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=val;
	ptr=start;
	while(ptr->next!=start)
	 {
		  ptr=ptr->next;
	  }
	ptr->next=new_node;
	new_node->next=start;
}

void delete_end()
{
	struct node *ptr,*tmp;
	ptr=start;
	tmp=start;
	while(ptr->next!=start)
	{
		tmp=ptr;
		ptr=ptr->next;
	}
	tmp->next=start;
	printf("deleted element is:%d",ptr->data);
	free(ptr);
}

void delete_beg()
{
	struct node *tmp=NULL,*ptr=NULL;
	ptr=start;
	tmp=start;
	while(tmp->next!=start)
	{
		tmp=tmp->next;
	}
	tmp->next=ptr->next;
	start=start->next;
	printf("deleted element is:%d",ptr->data);
	free(ptr);
}

void display()
{
	 struct node *ptr;
	 ptr=start;
	 while(ptr->next!=start)
	 {
		  printf("%d->",ptr->data);
		  ptr=ptr->next;
	  }
	  printf("%d->",ptr->data);
  }

int main()
{
	int choice;
	while(1)
	{
		printf("\n1.CREATE\n2.INSERT AT BEG\n3.INSERT AT END\n4.DELETE AT BEG\n5.DELETE AT END\n6.DISPLAY\n7.EXIT\n");
		printf("enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create();
			            break;
			case 2:insert_beg();
			           break;
			case 3:insert_end();
			            break;
			case 4:delete_beg();
			            break;
			case 5:delete_end();
			            break;
			case 6:display();
			             break;
			case 7:exit(1);
			            break;
			default :printf("wrong choice");
		}
	}
}

/*
output


1.CREATE
2.INSERT AT BEG
3.INSERT AT END
4.DELETE AT BEG
5.DELETE AT END
6.DISPLAY
7.EXIT
enter the choice:1
enter the value:5

1.CREATE
2.INSERT AT BEG
3.INSERT AT END
4.DELETE AT BEG
5.DELETE AT END
6.DISPLAY
7.EXIT
enter the choice:2
enter the value:6

1.CREATE
2.INSERT AT BEG
3.INSERT AT END
4.DELETE AT BEG
5.DELETE AT END
6.DISPLAY
7.EXIT
enter the choice:3
enter the value:6

1.CREATE
2.INSERT AT BEG
3.INSERT AT END
4.DELETE AT BEG
5.DELETE AT END
6.DISPLAY
7.EXIT
enter the choice:6
6->5->6->
1.CREATE
2.INSERT AT BEG
3.INSERT AT END
4.DELETE AT BEG
5.DELETE AT END
6.DISPLAY
7.EXIT
enter the choice:4
deleted element is:6
1.CREATE
2.INSERT AT BEG
3.INSERT AT END
4.DELETE AT BEG
5.DELETE AT END
6.DISPLAY
7.EXIT
enter the choice:6
5->6->
1.CREATE
2.INSERT AT BEG
3.INSERT AT END
4.DELETE AT BEG
5.DELETE AT END
6.DISPLAY
7.EXIT
enter the choice:5
deleted element is:6
1.CREATE
2.INSERT AT BEG
3.INSERT AT END
4.DELETE AT BEG
5.DELETE AT END
6.DISPLAY
7.EXIT
enter the choice:6
5->
1.CREATE
2.INSERT AT BEG
3.INSERT AT END
4.DELETE AT BEG
5.DELETE AT END
6.DISPLAY
7.EXIT
enter the choice:7

*/
