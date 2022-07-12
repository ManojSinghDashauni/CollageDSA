//Name : Manoj Singh Dashauni
//Section: F
//Roll No. : 12

//Objective: WACP to implement singly linked list
//Description: In this program, the user is presented with a menu to create , insertion, deletion , count, display the elements and exit . Based on user choice, the program asks for input from user. The program will implement all singly linked list operations.

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;	
};

typedef struct node NODE;

NODE *start=NULL;
void display();
void create();
void insert_beg();
void insert_mid();
void insert_end();
void delete_beg();
void delete_end();
int count();

void main(){
	int choice;
	while(1)
	{
		printf("enter the choice\n1.create\n2.display\n3.insert at beginning\n4.insert at middle\n5.insert at end\n6.delete from beginning\n7.delete from end\n8.count\n9.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create();
			       break;
			case 2:display();
			       break;
			case 3:insert_beg();
			       break;
			case 4:insert_mid();
			       break;
			case 5:insert_end();
			       break;
			case 6:delete_beg();
			       break;
			case 7:delete_end();
			       break;
			case 8:count();
			       printf("no of nodes are:%d",count());
			       break;
			case 9:exit(0);
		}
	}
}

void insert_beg(){
    NODE *temp;
    int n;
    temp=(NODE*)malloc(sizeof(NODE));
    printf("Enter the number");
    scanf("%d",&n);
    temp->data=n;
    temp->next=start;
    start=temp;
}

void insert_mid(){
    NODE *temp,*ptr;
    int n,mid;
    ptr=start;
    temp=(NODE*)malloc(sizeof(NODE));
    printf("Enter the number");
    scanf("%d",&n);
    temp->data=n;
    printf("Enter after what value you want to insert");
    scanf("%d",&mid);
    while(ptr->data!=mid)
    ptr=ptr->next;
    temp->next=ptr->next;
    ptr->next=temp;
}

void insert_end(){
	NODE *tmp;
	int n;
	tmp=(NODE*)malloc(sizeof(NODE));
	printf("enter the number");
	scanf("%d",&n);
	tmp->data=n;
	tmp->next=start;
	start=tmp;
}

void display(){
	NODE *ptr;
	ptr=start;
	while(ptr!=NULL){
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
}

void create(){
	NODE *ptr,*tmp;
	int n;
	if(start==NULL){
		start=(NODE*)malloc(sizeof(NODE));
		ptr=start;
		printf("enter the number");
		scanf("%d",&n);
		ptr->data=n;
		ptr->next=NULL;
	}
	else{
		tmp=(NODE*)malloc(sizeof(NODE));
		printf("enter the number");
		scanf("%d",&n);
		tmp->data=n;
		tmp->next=NULL;
		while(ptr->next!=NULL)
		ptr=ptr->next;
		ptr->next=tmp;
	} 
}

int count(){
	NODE *tmp;
	int count=0;
	tmp=start;
	while(tmp!=NULL){
		count++;
		tmp=tmp->next;
	}
	return count;
}     

void delete_beg(){
    NODE *temp;
    int n,count;
    if(start==NULL){
        printf("Linked list is already empty.\n");
        return;
    }
    n=start->data;
    temp=start->next;
    free(start);
    start=temp;
    count--;
    printf("%d deleted from beginning successfully.\n",n);
}

void delete_end(){
	NODE *tmp,*ptr;
	tmp=start;
	ptr=start;
	while(tmp->next!=NULL){
		 ptr=tmp;  
		 tmp=tmp->next;
	 }
	 ptr->next=NULL;
	 free(tmp);
}

/*
output
enter the choice
1.create
2.display
3.insert at beginning
4.insert at middle
5.insert at end
6.delete from beginning
7.delete from end
8.count
9.exit
1
enter the number11
enter the choice
1.create
2.display
3.insert at beginning
4.insert at middle
5.insert at end
6.delete from beginning
7.delete from end
8.count
9.exit
3       
Enter the number12
enter the choice
1.create
2.display
3.insert at beginning
4.insert at middle
5.insert at end
6.delete from beginning
7.delete from end
8.count
9.exit
4
Enter the number14
Enter after what value you want to insert12
enter the choice
1.create
2.display
3.insert at beginning
4.insert at middle
5.insert at end
6.delete from beginning
7.delete from end
8.count
9.exit
5
enter the number17
enter the choice
1.create
2.display
3.insert at beginning
4.insert at middle
5.insert at end
6.delete from beginning
7.delete from end
8.count
9.exit
2
17->12->14->11->enter the choice
1.create
2.display
3.insert at beginning
4.insert at middle
5.insert at end
6.delete from beginning
7.delete from end
8.count
9.exit
6
17 deleted from beginning successfully.
enter the choice
1.create
2.display
3.insert at beginning
4.insert at middle
5.insert at end
6.delete from beginning
7.delete from end
8.count
9.exit
2
12->14->11->enter the choice
1.create
2.display
3.insert at beginning
4.insert at middle
5.insert at end
6.delete from beginning
7.delete from end
8.count
9.exit
9
*/
 
 
