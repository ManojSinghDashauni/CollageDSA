//Name- Manoj Singh Dashauni
//Section - F
//Roll No. - 12

//Objective : WACP to implement binary search.
//Description: In this program we will enter the elements in an array in sorted way and then search the element in the array by implementing binary search.

#include<stdio.h>
#define MAX 50
void main()
{
int i,size,item,arr[MAX],index;
printf("Enter the number of elements:");
scanf("%d",&size);
printf("Enter the elements (in sorted order):\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the item to be searched:");
scanf("%d",&item);
index=BinarySearch(arr,size,item);
if(index==-1)
   printf("%d not found in array\n",item);
else
   printf("%d found at position %d\n",item,index);
}

int BinarySearch(int arr[],int size,int item)
{
int low=0,up=size-1,mid;
while(low<=up)
{
mid=(low+up)/2;
if(item>arr[mid])
    low=mid+1;
else if(item<arr[mid])
    up=mid-1;
else
     return mid;
}
return -1;
}

/*
OUTPUT
Enter the number of elements:5
Enter the elements (in sorted order):
3 4 2 5 1
Enter the item to be searched:5
5 found at position 3
*/