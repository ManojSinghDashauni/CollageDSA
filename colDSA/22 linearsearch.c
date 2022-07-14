//Name- Manoj Singh Dashauni
//Section - F
//Roll No. - 12

//Objective: WACP to implement linear search
//Description: In this program we will enter the elements in an array and then search the element in the array by implementing linear search.

#include<stdio.h>
#define MAX 50
void main()
{
int i,n,item,arr[MAX],index;
printf("Enter the number of elements:");
scanf("%d",&n);

printf("Enter the elements:\n");
for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  
printf("Enter the item to be searched:");
scanf("%d",&item);

index=LinearSearch(arr,n,item);

if(index==-1)
  printf("%d not found in an array\n",item);
else
  printf("%d found at position %d\n",item,index);
}

int LinearSearch(int arr[],int n,int item)
{
int i=0;
while(i<n&&item!=arr[i])
   i++;
if(i<n)
   return i;
else
   return -1;
}

/*
output

Enter the number of elements:5
Enter the elements:
1 2 3 4 5
Enter the item to be searched:5
5 found at position 4
*/
