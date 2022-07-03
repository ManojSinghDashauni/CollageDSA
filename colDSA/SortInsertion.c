//WAP to implement insertion sort.
#include <stdio.h>
#define N 25
int main()
{
    int i,j,n,hole,value,arr[N];
    printf("ente the number of elements : ");
    scanf("%d",&n);
    
    printf("enter the numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<n;i++){
        value=arr[i];
        hole=i;
        
        while((hole>0) && (arr[hole-1]>value)){
            arr[hole]=arr[hole-1];
            hole-=1;
        }
        
        arr[hole]=value;
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
