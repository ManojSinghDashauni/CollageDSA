//WAP to implement insertion sort.
#include <stdio.h>
#define N 25
int main()
{
    int i,j,n,temp,arr[N];
    printf("ente the number of elements : ");
    scanf("%d",&n);
    
    printf("enter the numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        temp=arr[i];
        j=i-1;
        while((temp<arr[j]) && (j>=0)){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp;
    }
    
    printf("order of sorted elements : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

/*
OUTPUT

ente the number of elements : 5
enter the numbers : 3 1 4 2 0
order of sorted elements : 0 1 2 3 4 
*/
