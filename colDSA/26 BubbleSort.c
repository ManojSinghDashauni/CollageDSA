//Name : Manoj Singh Dashauni
//Section: F
//Roll No. : 12

//Objective: WACP to implement bubble sort
//Description: In this program we will enter the elements in an array and then sort  the element in the array in ascending order by implementing bubble sort.


#include<stdio.h>
void main(){
    int a[100],n,i;
    printf("Enter the number of elements:");
	scanf("%d",&n);
	  
	printf("enter elements:");
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	   
	BubbleSort(a,n);
	   
	printf("the sorted array in ascending order: \n");
	for(i=0;i<n;i++){
	    printf("%d\n",a[i]);
	}
} 


int BubbleSort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}



/*
output

Enter the number of elements:5
enter elements:1 4 2 5 3
the sorted array in ascending order: 
1
2
3
4
5
*/
