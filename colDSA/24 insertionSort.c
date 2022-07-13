//Name : Manoj Singh Dashauni
//Section: F
//Roll No. : 12

//Objective: WACP  to implement insertion sort
//Description: In this program we will enter the elements in an array and then sort  the element in the array in ascending order by implementing insertion sort.


#include<stdio.h>
void main()
{
	int i,n,arr[25];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	
	InsertionSort(arr,n);
	
	printf("Order of sorted elements:\n");
	for(i=0;i<n;i++){  
	   printf("%d\n",arr[i]);
	}
}

int InsertionSort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
		 temp=arr[i];
		 j=i-1;
		 while((temp<arr[j])&&(j>=0)){
			 arr[j+1]=arr[j];
			 j=j-1;
		}
		arr[j+1]=temp;
	}
}

/*
output

Enter the number of elements:5
Enter the numbers:
1 3 2 4 5
Order of sorted elements:
1
2
3
4
5
*/
